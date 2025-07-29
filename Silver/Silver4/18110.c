// 18110
#include <stdio.h>
#include <stdlib.h>

int dat[300005] = {};

int compare(const void *a, const void *b);

int carry(int n);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &dat[i]);
    }
    qsort(dat, n, sizeof(dat[0]), compare);

    int edge = carry(n);
    // printf("%d\n", edge);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= edge && i < n - edge)
        {
            sum += dat[i];
        }
    }
    // printf("%d\n", sum);
    if (n == 0)
    {
        printf("0");
    }
    else
    {
        double avg = (double)sum / (double)(n - edge * 2);
        int avg_int = (int)(avg + 0.5);
        printf("%d", avg_int);
    }
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

int carry(int n)
{
    double a = (double)n * 15.0 / 100.0;
    return (int)(a + 0.5);
}