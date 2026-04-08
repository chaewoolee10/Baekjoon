//11478
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

typedef struct 
{
    char str[1004];
}CHARACTER;

int compare(const void *a, const void *b);

CHARACTER str_dup[501000] = {};

int main()
{
    char str[1004] = {}; scanf("%s", str);
    int length = strlen(str);
    
    int dup_idx = 0;
    for(int i = 1; i <= length; i++)
    {
        for(int idx = 0; idx <= length - i; idx++)
        {
            char a[1004] = {};
            int a_idx = 0;
            for(int j = idx; j < idx + i; j++)
            {
                a[a_idx] = str[j];
                a_idx++;
            }
            strcpy(str_dup[dup_idx].str, a);
            //printf("%d\n", dup_idx);
            dup_idx++;
        }
    }   
    //printf("%d", dup_idx);
    qsort(str_dup, dup_idx, sizeof(str_dup[0]), compare);
    
    int count = 1;
    for(int i = 0; i < dup_idx - 1; i++)
    {
        if(strcmp(str_dup[i].str, str_dup[i+1].str))
        {
            count++;
        }
    }
    
    printf("%d", count);
}
int compare(const void *a, const void *b)
{
    const CHARACTER *pa = (const CHARACTER *)a;
    const CHARACTER *pb = (const CHARACTER *)b;

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