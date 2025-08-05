//1026
#include <stdio.h>
#include <stdlib.h>


int b_arr[60] = {};
int a_arr[60] = {};

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a_arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b_arr[i]);
    }
    
    qsort(a_arr, n, sizeof(a_arr[0]), compare);
    qsort(b_arr, n, sizeof(a_arr[0]), compare);
    
    unsigned long long int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += a_arr[i] * b_arr[n - i - 1];
    }
    printf("%llu", sum);
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
