//11004
#include <stdio.h>
#include <stdlib.h>

int arr[5000005] = {};

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    printf("%d", arr[k - 1]);
    
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