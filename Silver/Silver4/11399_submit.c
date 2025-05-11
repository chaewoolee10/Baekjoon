//11399
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    int arr[1000] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    int sum = 0;
    int newarr[1000] = {};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            newarr[i] += arr[j];
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        sum += newarr[i];
    }
    printf("%d", sum);
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