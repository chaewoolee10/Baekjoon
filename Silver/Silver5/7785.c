//7785
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int binarysearch(char *str, int n, char *target);

typedef struct people
{
    char name[6];
    int remain;
    
}PEOPLE;

int main()
{
    int n; scanf("%d", &n);
    PEOPLE arr[1000000] = {};
    char enter[6] = {};
    
    for(int i = 0; i < n; i++)
    {
        char name[6] = {}; scanf("%s", name);
        
        
        scanf("%s", enter);
        
        if(!strcmp(enter, "enter"))
        {
            arr[i].remain = 1;
        }
        if(!strcmp(enter, "leave"))
        {
            arr[i].remain = 0;
        }
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < n; i++)
    {
        
    }
}
int compare(const void *a, const void *b)
{
    const PEOPLE *pa = (const PEOPLE *)a;
    const PEOPLE *pb = (const PEOPLE *)b;
    
    if(strcmp(pa->name, pb->name) > 0)
    {
        return -1;
    }
    else if(strcmp(pa->name, pb->name) < 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int binarysearch(char str[][6], int n, char *target)
{
    int first = 0;
    int last = n - 2;
    
    while(1)
    {
        int mid = (first + last) / 2;
        if(first > last)
        {
            return 0;
        }
        if(!strcmp(str[mid], target))
        {
            return mid;
        }
        else if(strcmp(str[mid], target) < 0)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
}