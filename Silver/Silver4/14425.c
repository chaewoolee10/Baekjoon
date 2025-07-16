// 14425
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct set
{
    char str[503];
} SET;

int compare(const void *a, const void *b);
int binarysearch(SET *arr, char *target, int n);

SET arr_n[10000] = {};
SET arr_m[10000] = {};

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr_n[i].str);
    }
    qsort(arr_n, n, sizeof(arr_n[0]),  compare);
    
    for(int i = 0; i < m; i++)
    {
        scanf("%s", arr_m[i].str);
    }
    
    int count = 0;
    for(int i = 0; i < m; i++)
    {
        count += binarysearch(arr_n, arr_m[i].str, n);
    }
    printf("%d", count);
}
int compare(const void *a, const void *b)
{
    const SET *pa = (const SET *)a;
    const SET *pb = (const SET *)b;

    if (strcmp(pa->str, pb->str) > 0)
    {
        return 1;
    }
    else if (strcmp(pa->str, pb->str) < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int binarysearch(SET *arr, char *target, int n)
{
    int front = 0;
    int back = n - 1;
    
    while(1)
    {
        int mid = (front + back) / 2;
        if(front > back)
        {
            return 0;
        }
        if(!strcmp(arr[mid].str, target))
        {
            return 1;
        }
        if(strcmp(arr[mid].str, target) < 0)
        {
            front = mid + 1;
        }
        if(strcmp(arr[mid].str, target) > 0)
        {
            back = mid - 1;
        }
    }
}