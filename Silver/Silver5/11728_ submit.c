//11728
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int arr[2000000] = {};

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    for(int i = 0; i < n + m; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n + m, sizeof(arr[0]), compare);
    
    for(int i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
    
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