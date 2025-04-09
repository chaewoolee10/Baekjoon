//1181
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    char str[20000][51] = {};
    
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    
    qsort(str, n, sizeof(str[0]), compare);
    
    for(int i = 0; i < n; i++)
    {
        if(i == 0 || strcmp(str[i], str[i - 1]))
        {
            printf("%s\n", str[i]);
        }
    }
        
}

int compare(const void *a, const void *b)
{
    const char *apoint = (const char *)a;
    const char *bpoint = (const char *)b;
    
    int len_a = strlen(apoint);
    int len_b = strlen(bpoint);
    
    if(len_a < len_b)
    {
        return -1;
    }
    else if(len_a > len_b)
    {
        return 1;
    }
    else
    {
        if(strcmp(apoint, bpoint) > 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}
