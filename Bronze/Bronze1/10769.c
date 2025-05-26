//10769
#include <stdio.h>
#include <string.h>

int main()
{
    char str[256] = {}; 
    scanf("%[^\n]s", str);
    int length = strlen(str);
    
    int happy = 0;
    int sad = 0;
    
    for(int i = 0; i < length - 2; i++)
    {
        if(str[i] == ':')
        {
            if(str[i + 1] == '-' && str[i + 2] == ')')
            {
                happy++;
            }
            else if(str[i + 1] == '-' && str[i + 2] == '(')
            {
                sad++;
            }
        }    
    }
    if(happy == sad)
    {
        if(happy == 0)
        {
            printf("none");
        }
        else
        {
            printf("unsure");
        }
    }
    else
    {
        happy > sad ? printf("happy") : printf("sad");
    }
    
    
}