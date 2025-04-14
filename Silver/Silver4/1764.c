//1764
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct hear
{
    char name[21];
    int hear;
}HEAR;

int binarysearch(char *target, HEAR *str, int n);

int compare(const void *a, const void *b);

HEAR arr[500000] = {};

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    char see[21] = {};
    int count = 0;
    
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
        arr[i].hear = 1;
    }
    
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < m; i++)
    {
        scanf("%s", see);
        
        int hearidx = binarysearch(see, arr, n);
        
        if(hearidx != -1)
        {
            arr[hearidx].hear = 0;
            count++;
        }
        
        for(int j = 0; j < 21; j++)
        {
            see[j] = '\0';
        }
    }
    
    printf("%d\n", count);
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i].hear == 0)
        {
            printf("%s\n", arr[i].name);
        }
    }
}

int binarysearch(char *target, HEAR *str, int n)
{
    int first = 0;
    int last = n - 1;
    
    while(1)
    {
        int mid = (first + last) / 2;
        
        if(!strcmp(str[mid].name, target))
        {
            return mid;
        }
        if(first > last)
        {
            return -1;
        }
        if(strcmp(str[mid].name, target) < 0)
        {
            first = mid + 1;
        }
        else if(strcmp(str[mid].name, target) > 0)
        {
            last = mid - 1;
        }
    }
}

int compare(const void *a, const void *b)
{
    const HEAR *pa = (const HEAR *)a;
    const HEAR *pb = (const HEAR *)b;
    
    if(strcmp(pa->name, pb->name) < 0)
    {
        return -1;
    }
    else if(strcmp(pa->name, pb->name) > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}