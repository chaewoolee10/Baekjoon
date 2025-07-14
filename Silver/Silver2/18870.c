// 18870
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int arr[1000003] = {};
int arrprime[1000003] = {};
int arr_addr[1000003] = {};

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1 || i != 0)
        {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                arrprime[i] = i;
            }
            else if (arr[i] == arr[i - 1])
            {
                arrprime[i] = i - 1;
            }
        }
        else if(i == 0)
        {
            arrprime[i] = 0;
        }
        else if(i == n - 1)
        {
            if(arr[i] == arr[i - 1])
            {
                arrprime[i] = i - 1;
            }
            else
            {
                arrprime[i] = i;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrprime[i]);
    }
}

int compare(const void *a, const void *b)
{
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;

    if (*pa > *pb)
    {
        return 1;
    }
    else if (*pa < *pb)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
