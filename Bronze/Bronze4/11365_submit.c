//11365
#include <stdio.h>
#include <string.h>

int main()
{
    char str[500] = {};
    while(1)
    {
        scanf("%[^\n]s", str);
        getchar();
        if(str[0] == 'E' && str[1] == 'N' && str[2] == 'D')
        {
            break;
        }
        int length = strlen(str);
        
        for(int i = length - 1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
}