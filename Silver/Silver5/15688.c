//15688
#include <stdio.h>
#include <stdlib.h>

int arr[1000004] = {};

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
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