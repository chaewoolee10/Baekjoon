//2108
#include <stdio.h>
#include <stdlib.h>

int dat[500005] = {};
int count[8003] = {};

int compare(const void *a, const void *b);

void avg(double sum, int n);
void median(int n);
void mode(int n);
void range(int n);

int main()
{
    int n; scanf("%d", &n);
    double sum;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &dat[i]);
        sum += (double)dat[i];
        count[dat[i] + 4000]++; //-4000 -> dat[0]
    }
    qsort(dat, n, sizeof(dat[0]), compare);
    avg(sum, n);
    median(n);
    mode(n);
    range(n);
}
int compare(const void *a, const void *b)
{
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;
    
    if(*pa > *pb)
    {
        return 1;
    }
    else if(*pa < *pb)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void avg(double sum, int n)
{
    sum /= (double)n;
    if(sum < 0)
    {
        printf("%d\n", (int)(sum - 0.5));
    }
    else
    {
        printf("%d\n", (int)(sum + 0.5));
    }
    
}
void median(int n)
{
    printf("%d\n", dat[n / 2]);
}
void mode(int n)
{
    int idx = 0;
    int max = 0;
    int mincheck = 0;
    
    for(int i = -4000; i <= 4000; i++)
    {
        if(count[i + 4000] > max)
        {
            max = count[i + 4000];
        }
    }
    
    for(int i = -4000; i <= 4000; i++)
    {
        if(count[i + 4000] == max && (mincheck == 0 || mincheck == 1))
        {
            mincheck++;
            idx = i;
        }
        else if(count[i + 4000] == max && mincheck == 2)
        {
            continue;
        }
    }
    printf("%d\n", idx);
}

void range(int n)
{
    printf("%d\n", dat[n - 1] - dat[0]);
}
