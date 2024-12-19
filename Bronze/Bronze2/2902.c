//2902
#include <stdio.h>
#include <string.h>

int main()
{
    char str[105] = {}; scanf("%s", str);
    int length = strlen(str);
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i]);
        }
    }
}