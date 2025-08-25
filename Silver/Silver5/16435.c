//16435
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    int l; scanf("%d", &l);
    
    int arr[1005] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < n; i++)
    {
        if(l >= arr[i])
        {
            l++;
        }
    }
    printf("%d", l);
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