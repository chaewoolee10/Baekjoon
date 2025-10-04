//11121
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        char str1[125] = {}; scanf("%s", str1);
        char str2[125] = {}; scanf("%s", str2);
        
        if(!strcmp(str1, str2))
        {
            printf("OK\n");
        }
        else
        {
            printf("ERROR\n");
        }
    }
}