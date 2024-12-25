//11721
#include <stdio.h>
#include <string.h>

int main()
{
    char str[105] = {};
    scanf("%s", str);
    int length = strlen(str);
    int nextline = 0;
    for(int i = 0; i < length; i++)
    {
        printf("%c", str[i]);
        nextline++;
        if(nextline / 10 == 1)
        {
            printf("\n");
            nextline = 0;
        }
    }
    
    
}