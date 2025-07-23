//7765
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct employeename
{
    char name[7];
    int state;
}emp;

emp arr[1000000] = {};

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
        char str[7] = {}; scanf("%s", str);
        if(str[0] == 'e')
        {
            arr[i].state = 1;
        }
        else if(str[0] == 'l')
        {
            arr[i].state = 0;
        }
        
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i].state == 1)
        {
            if(arr[i + 1].state == 0 && i + 1 != n)
            {
                continue;
            }
            else
            {
                printf("%s\n", arr[i].name);
            }
        }
        else
        {
            continue;
        }
    }
    
}

int compare(const void *a, const void *b)
{
    const emp *pa = (const emp *)a;
    const emp *pb = (const emp *)b;
    
    
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
