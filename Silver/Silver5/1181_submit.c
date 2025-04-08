#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main()
{
    char str[20000][21] = {};
    
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    
    qsort(str, n, sizeof(str[0]), compare);
    
    for(int i = 0; i < n; i++)
    {
        if(i < n - 1 && !strcmp(str[i], str[i + 1]))
        {
            continue;
        }
        else
        {
            printf("%s\n", str[i]);
        }
    }
        
}

int compare(const void *a, const void *b)
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    
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
        if(strcmp(a, b) > 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}
