//15873
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5] = {};
    scanf("%s", str);
    
    int length = strlen(str);
    
    switch(length)
    {
        case 2:
            printf("%d", str[0] + str[1] - '0' * 2);
            break;
        case 3:
            if(str[1] == '0')
            {
                printf("%d", 10 + (str[2] - '0'));
            }
            else
            {
                printf("%d", 10 + (str[0] - '0'));
            } 
            break;
        default:            
            printf("20");
            break;
    }

}