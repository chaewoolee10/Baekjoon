//31495
#include <stdio.h>
#include <string.h>

int main()
{
    char str[53] = {}; scanf("%[^\n]s", str);   
    int length = strlen(str);
    if(str[0] == str[length - 1] && str[0] == '\"' && length >= 3)
    {
        for(int i = 1; i < strlen(str) - 1; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("CE");
    }
    
    
}