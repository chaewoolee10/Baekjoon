//9076
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
void cal();

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        cal();   
    }
}

void cal()
{
    int arr[5] = {};
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, 5, sizeof(arr[0]), compare);
    arr[0] = 0;
    arr[4] = 0;
    if(arr[3] - arr[1] >= 4)
    {
        printf("KIN\n");
    }
    else
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }
        printf("%d\n", sum);
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