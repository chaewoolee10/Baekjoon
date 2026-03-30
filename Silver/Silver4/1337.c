//1337
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d" ,&n);
    int arr[50] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
    qsort(arr, n, sizeof(arr[0]), compare);
    
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        int idx = i;
        int count = 0;
        for(int j = arr[i]; j < arr[i] + 5; j++)
        {
            if(arr[idx] == j)
            {
                count++;
                idx++;    
            }
            if(idx > n) break;
        }
        if(max < count) max = count;
    }   
    printf("%d", 5 - max);
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