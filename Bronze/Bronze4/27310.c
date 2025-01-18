//27310
#include <stdio.h>
#include <string.h>

int main()
{
    char str[35] = "";
    scanf("%s", str);
    int length = strlen(str);
    int coloncount = 2;
    int underbarcount = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] == '_')
        {
            underbarcount++;
        }
    }
    printf("%d", length + coloncount + underbarcount * 5);
    
}