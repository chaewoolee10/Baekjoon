// 11652
#include <stdio.h>
#include <stdlib.h>
typedef long long int LONG;
LONG arr[100005] = {};

int compare(const void *a, const void *b);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);

    int max = 0;
    int count = 1;
    int max_idx = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > max)
        {
            max_idx = i;
            max = count;
        }

    }
    printf("%lld", arr[max_idx]);
}
int compare(const void *a, const void *b)
{
    const LONG *pa = (const LONG *)a;
    const LONG *pb = (const LONG *)b;

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