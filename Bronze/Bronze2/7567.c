//7567
#include <stdio.h>
#include <string.h>

int main()
{
    char str[51] = {};
    scanf("%s", str);
    
    int length = strlen(str);
    int height = 10;
    
    for(int i = 0; i < length - 1; i++)
    {
        if(str[i] == str[i+1])
        {
            height += 5;
        }
        else
        {
            height += 10;
        }
    }
    printf("%d", height);    
}