//2776
#include <stdio.h>
#include <stdlib.h>

void memorize();
int compare(const void *a, const void *b);
int binarysearch(int n, int target);
void initialset(int n, int m);

int memo1[1000004] = {};
int memo2[1000004] = {};

int main()
{
    int t; scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        memorize();
    }
}

void memorize()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &memo1[i]);
    }
    qsort(memo1, n, sizeof(memo1[0]), compare);
    
    int m; scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &memo2[i]);
        memo2[i] = binarysearch(n, memo2[i]);
    }
    for(int i = 0; i < m; i++)
    {
        printf("%d\n", memo2[i]);
    }
    initialset(n, m);
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
int binarysearch(int n, int target)
{
    int head = 0;
    int tail = n - 1;
    
    while (1)
    {
        int mid = (tail + head) / 2;
        if(memo1[mid] == target)
        {
            return 1;
        }
        if(tail < head)
        {
            return 0;
        }
        if(memo1[mid] < target)
        {
            head = mid + 1;
        }
        else if(memo1[mid] > target)
        {
            tail = mid - 1;
        }
    }
    
}
void initialset(int n, int m)
{
    int max = n < m ? n : m;
    for(int i = 0; i < max; i++)
    {
        memo1[i] = 0;
        memo2[i] = 0;
    }
}