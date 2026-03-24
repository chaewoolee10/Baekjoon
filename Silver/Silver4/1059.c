//1059
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int start_func(int *arr, int n);
int end_func(int *arr, int n);
void interval_func(int n, int start, int end);

int main()
{
    int l; scanf("%d", &l);
    
    int arr[50] = {};
    for(int i = 0; i < l; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, l, sizeof(arr[0]), compare);
    
    int n; scanf("%d", &n);
    
    int start = start_func(arr, n);
    int end = end_func(arr, n);
    if(start == n || end == n)
    {
        printf("0");
        return 0;
    }
    else
    {
        interval_func(n, start, end);
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
int start_func(int *arr, int n)
{
    int idx = 0;
    while(1)
    {
        if(arr[idx] > n)
        {
            if(idx == 0) return 0;
            else return arr[idx - 1];
        }
        idx++;
    }
}
int end_func(int *arr, int n)
{
    int idx = 0;
    while(1)
    {
        if(arr[idx] > n)
        {
            return arr[idx];
        }
        idx++;
    }
}
void interval_func(int n, int start, int end)
{
    int count = 0;
   //printf("%d", (end - n) * (n - start) - 1);
    start++;
    end--;
    while(1)
    {
        if(start > n) break;
        int end_dup = end;
        while(1)
        {
            if(end_dup == n) break;
            end_dup--;
            count++;
        }
        start++;
        count++;
    }
    printf("%d", count - 1);
}