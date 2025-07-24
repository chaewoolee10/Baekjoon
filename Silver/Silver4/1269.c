//1269
#include <stdio.h>
#include <stdlib.h>

int narr[200005] = {};
int marr[200005] = {};

void initialset(int n, int m);
int compare(const void *a, const void *b);
int binarysearch(int target, int n, int *arr);

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    initialset(n, m);
    
    int dup = 0;
     
    int set_n_m = 0;
    int set_m_n = 0;
    
    for(int i = 0; i < n; i++)
    {
        int check = binarysearch(narr[i], m, marr);
        if(!check)
        {
            set_n_m++;
        }
        else
        {
            dup++;
        }
    }
    set_m_n = m - dup;
    /*
    for(int i = 0; i < m; i++)
    {
        int check = binarysearch(marr[i], m, narr);
        if(!check)
        {
            set_m_n++;
        }
    }
    */
    printf("%d", set_m_n + set_n_m);
    
}

void initialset(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &narr[i]);
    }
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &marr[i]);
    }
    
    qsort(narr, n, sizeof(narr[0]), compare);
    qsort(marr, m, sizeof(marr[0]), compare);
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
int binarysearch(int target, int n, int *arr)
{
    int tail = n - 1;
    int head = 0;

    while(1)
    {
        int mid = (tail + head) / 2;
        //printf("%d, %d, binarysearch\n",arr[mid], target);
        if(arr[mid] == target)
        {
            return 1;
        }
        if(tail < head)
        {
            return 0;
        }
        if(arr[mid] < target)
        {
            head = mid + 1;
        }
        if(arr[mid] > target)
        {
            tail = mid - 1;
        }
        
    }
}