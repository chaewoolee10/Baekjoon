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
    
    qsort(str, n, sizeof(char *), compare);
}

int compare(const void *a, const void *b)
{
    
    return strcmp(a, b);
}