//10816
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);


int main()
{
    int n; scanf("%d", &n);
    int narr[500000] = {};
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &narr[i]);
    }
    
    qsort(narr, n, sizeof(narr[0]), compare);
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", narr[i]);
    }
    
    int m; scanf("%d", &m);
    
    int marr[500000] = {};
    
    
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