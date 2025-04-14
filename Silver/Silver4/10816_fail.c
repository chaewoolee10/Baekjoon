//10816
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int lowerbound(int *arr, int n, int target);
int upperbound(int *arr, int n, int target);

int main()
{
    int n; scanf("%d", &n);
    int narr[500000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &narr[i]);
    }
    
    qsort(narr, n, sizeof(narr[0]), compare);
    
    int m; scanf("%d", &m);
    int marr[500000] = {};
    
    for(int i = 0;  i < m; i++)
    {
        int a; scanf("%d", &a);
        marr[i] = lowerbound(narr, n, a);
    }
    
    for(int i = 0; i < m; i++)
    {
        printf("%d ", marr[i]);
    }
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

int lowerbound(int *arr, int n, int target)
{
    int first = 0;
    int last = n - 1;
    int res = 0;
    
    while(first <= last)
    {
        int mid = (first + last) / 2;
        if(mid == 0 || arr[res] > arr[mid - 1])
        {
            break;
        }
        if(arr[mid] == target)
        {
            res = mid;
        }
        if(arr[mid] > target)
        {
            last = mid;
        }
        else if(arr[mid] < target)
        {
            first = mid;
        }
    }
    return res;
}

int  upperbound(int *arr, int n, int target)
{
    int first = 0;
    int last = n - 1;
    
    while(first <= last)
    {
        int mid = (first + last) / 2;
        if(arr[mid] < target)
        {
            first = mid + 1;
        }
        else if(arr[mid] > target)
        {
            last = mid;
        }
    }
    return first;
}
