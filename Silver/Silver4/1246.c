// 1246
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
void calculator(int *pricearr, int n, int m);

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int pricearr[1005] = {};

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &pricearr[i]);
    }
    qsort(pricearr, m, sizeof(pricearr[0]), compare);
    calculator(pricearr, n, m);
   
}
int compare(const void *a, const void *b)
{
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;

    if (*pa < *pb)
    {
        return -1;
    }
    else if (*pa > *pb)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void calculator(int *pricearr, int n, int m)
{
    long long int max = 0;
    int max_idx = 0;
    for (int i = pricearr[0]; i <= pricearr[m - 1]; i++)
    {
        long long int sum = 0;
        int egg_count = n;
        for (int j = 0; j < m; j++)
        {
            if (i <= pricearr[j])
            {
                sum += i;
                egg_count--;
            }
            if(egg_count == 0)
            {
                break;
            }
        }
        if (max < sum)
        {
            max = sum;
            max_idx = i;
        }
    }
    printf("%d %lld", max_idx, max);
}