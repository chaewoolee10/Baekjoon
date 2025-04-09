//1920
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int binarysearch(int *arr, int n, int target);

int main()
{
    int n; scanf("%d", &n);
    int narr[100000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &narr[i]);
    }
    
    qsort(narr, n, sizeof(int), compare);
    
    int m; scanf("%d", &m);
    int marr[100000] = {};
    for(int i = 0; i < m; i++)
    {
        marr[i] = 0;
    }
    
    for(int i = 0; i < m; i++)
    {
        int mnum = 0; scanf("%d", &mnum);
        
        marr[i] = binarysearch(narr, n, mnum);
    }
    
    for(int i = 0; i < m; i++)
    {
        printf("%d\n", marr[i]);
    }
    
}

int compare(const void *a, const void *b)
{
    const int *apoint = (const int *)a;
    const int *bpoint = (const int *)b;
    
    return *apoint - *bpoint;
}

int binarysearch(int *arr, int n, int target)
{
    int firstidx = 0;
    int lastidx = n - 1;
    
    while(1)
    {
        int mididx = (lastidx + firstidx) / 2;
        
        if(firstidx > lastidx)
        {
            return 0;
        }
        if(arr[firstidx] == target || arr[lastidx] == target)
        {
            return 1;
        }
        if(arr[mididx] == target)
        {
            return 1;
        }
        else
        {
            if(arr[mididx] > target)
            {
                lastidx = mididx - 1;
            }
            else
            {
                firstidx = mididx + 1;
            }
            
        }
    }
    
}