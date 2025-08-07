// 11656
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct array
{
    char suf[1005];
} ARR;

int compare(const void *a, const void *b);

int main()
{
    char str[1005] = {};
    scanf("%s", str);
    int length = strlen(str);
    ARR str_arr[1005] = {};

    for (int i = 0; i < length; i++)
    {
        int k = 0;
        for (int j = i; j < length; j++)
        {
            str_arr[i].suf[k] = str[j];
            k++;
        }
    }
    qsort(str_arr, length, sizeof(str_arr[0]), compare);
    
    for (int j = 0; j < length; j++)
    {
        printf("%s\n", str_arr[j].suf);
    }
}

int compare(const void *a, const void *b)
{
    const ARR *pa = (const ARR *)a;
    const ARR *pb = (const ARR *)b;
    
    if(strcmp(pa->suf, pb->suf) > 0)
    {
        return 1;
    }
    else if(strcmp(pa->suf, pb->suf) < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}