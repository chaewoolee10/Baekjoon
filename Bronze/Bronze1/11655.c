//11655
#include <stdio.h>
#include <string.h>

int main()
{
    char str[101] = {};
    scanf("%[^\n]s", str);
    int length = strlen(str);
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] == ' ' || (str[i] >= '0' && str[i] <= '9'))
        {
            continue;
        }
        else
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                if(str[i] + 13 > 'z')
                {
                    str[i] = str[i] + 13 - 'z' + 'a' - 1;
                }
                else
                {
                    str[i] += 13;
                }
            }
            else
            {
                if(str[i] + 13 > 'Z')
                {
                    str[i] = str[i] + 13 - 'Z' + 'A' - 1;
                } 
                else
                {
                    str[i] += 13;
                }
            }
        }
    }
    
    printf("%s", str);
}
