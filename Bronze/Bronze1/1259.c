//1259
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5];
    while(1)
    {
        scanf("%s", str);
        if(str[0] == '0')
        {
            break;
        }
        else
        {
            if(strlen(str) == 1)
            {
                printf("yes\n");
            }
            else
            {
                if(str[0] == str[strlen(str)-1] && str[1] == str[strlen(str)-2])
                {
                    printf("yes\n");
                }
                else
                {
                    printf("no\n");
                }
            }
            
        }
        
    }
}