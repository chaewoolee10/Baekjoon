//15000
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000005] = {};
    scanf("%s", str);
    
    int length = strlen(str);
    
    for(int i = 0; i < length; i++)
    {
        printf("%c", str[i] - 'a' + 'A');
    }
}