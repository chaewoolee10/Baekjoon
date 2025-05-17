//2217
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    int arr[1000000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    int max = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = arr[i] * (n - i);
        if(sum > max)
        {
            max = sum;
        }
    }
    printf("%d", max);
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