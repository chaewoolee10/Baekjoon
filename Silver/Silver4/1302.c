//1302
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book
{
    char str[55];
    
    
}BOOK;

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    BOOK arr[1004] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].str);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    int max = 0;
    int count = 1;
    int max_idx = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            if(!strcmp(arr[j].str, arr[j + 1].str))
            {
                count++;
            }
            else
            {
                i = j;
                break;
            }
        }
        if(max < count)
        {
            max = count;
            max_idx = i;
        }
        count = 1;
    }
    printf("%s", arr[max_idx].str);
}
int compare(const void *a, const void *b)
{
    const BOOK *pa = (const BOOK *)a;
    const BOOK *pb = (const BOOK *)b;
    
    if(strcmp(pa->str, pb->str) > 0)
    {
        return 1;
    }
    else if(strcmp(pa->str, pb->str) < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
