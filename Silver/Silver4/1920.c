// 1920
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int binarysearch(long long int *arr, int n, long long int target);

int main()
{
    int n;
    scanf("%d", &n);
    long long int narr[100000] = {};

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &narr[i]);
    }

    qsort(narr, n, sizeof(narr[0]), compare);

    int m;
    scanf("%d", &m);
    int marr[100000] = {};
    for (int i = 0; i < m; i++)
    {
        marr[i] = 0;
    }

    for (int i = 0; i < m; i++)
    {
        long long int mnum = 0;
        scanf("%lld", &mnum);

        marr[i] = binarysearch(narr, n, mnum);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", marr[i]);
    }
}

int compare(const void *a, const void *b)
{
    const long long int *apoint = (const long long int *)a;
    const long long int *bpoint = (const long long int *)b;

    if (*apoint < *bpoint)
    {
        return -1;
    }
    else if (*apoint > *bpoint)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int binarysearch(long long int *arr, int n, long long int target)
{
    int firstidx = 0;
    int lastidx = n - 1;

    while (1)
    {
        int mididx = (lastidx + firstidx) / 2;

        if (firstidx > lastidx)
        {
            return 0;
        }
        if (arr[firstidx] == target || arr[lastidx] == target)
        {
            return 1;
        }
        if (arr[mididx] == target)
        {
            return 1;
        }
        else
        {
            if (arr[mididx] > target)
            {
                lastidx = mididx - 1;
            }
            else
            {
                firstidx = mididx + 1;
            }
        }
    }
}