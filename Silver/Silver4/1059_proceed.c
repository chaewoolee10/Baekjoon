//1059
#include <stdio.h>
#include <stdlib.h>

int s[1004] = {};

int compare(const void *a, const void *b);
int maxfunc(int l, int n);
int minfunc(int l, int n);


int main()
{
    int l; scanf("%d", &l);
    for(int i = 0; i < l; i++)
    {
        scanf("%d", &s[i]);
    }
    qsort(s, l, sizeof(s[0]), compare);
    int n; scanf("%d", &n);
    int count = 0;
    int max = maxfunc(l, n);
    int min = minfunc(l, n);
    printf("%d %d", max, min);
    
}
int compare(const void *a, const void *b)
{
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;
    
    if(*pa < *pb)
    {
        return -1;
    }
    else if(*pa > *pb)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int maxfunc(int l, int n)
{
    int max = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i] >= n)
        {
            max = s[i];
            break;
        }
    }
    return max;
}
int minfunc(int l, int n)
{
    int min = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i] <= n)
        {
            min = s[i];
        }
    }
    return min;
}
