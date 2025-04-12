//10815
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int binarysearch(long long int *narr, int n, int target);


int main()
{
    int n; scanf("%d", &n);
    long long int narr[500000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &narr[i]);
    }
    qsort(narr, n, sizeof(narr[0]), compare);
    
    int m; scanf("%d", &m);
    int marr[500000] = {};
    
    for(int i = 0; i < m; i++)
    {
        int a; scanf("%d", &a);
        marr[i] = binarysearch(narr, n, a);   
    }
    
    for(int i = 0; i < m; i++)
    {
        printf("%d ", marr[i]);
    }
    
}

int compare(const void *a, const void *b)
{
    const long long int *pa = (const long long int *)a;
    const long long int *pb = (const long long int *)b;
    
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

int binarysearch(long long int *narr, int n, int target)
{
    int first = 0;
    int last = n - 1;
    
    while(1)
    {
        int mid = (first + last)/2;
        if(first > last)
        {
            return 0;
        }
        if(narr[mid] > target)
        {
            last = mid - 1;
        }
        else if(narr[mid] < target)
        {
            first = mid + 1;
        }
        else
        {
            return 1;
        }
        
    }
}