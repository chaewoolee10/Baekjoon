//5622
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20]; scanf("%s", str);
    int sec = 0;
    
    int length = strlen(str);

    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'C')
        {
            sec += 2+1;
        }
        else if(str[i] >= 'D' && str[i] <= 'F')
        {
            sec += 2+2;
        }
        else if(str[i] >= 'G' && str[i] <= 'I')
        {
            sec += 3+2;
        }
        else if(str[i] >= 'J' && str[i] <= 'L')
        {
            sec += 4+2;
        }
        else if(str[i] >= 'M' && str[i] <= 'O')
        {
            sec += 5+2;
        }
        else if(str[i] >= 'P' && str[i] <= 'S')
        {
            sec += 6+2;
        }
        else if(str[i] >= 'T' && str[i] <= 'V')
        {
            sec += 7+2;
        }
        else
        {
            sec += 8+2;
        }

    }
    printf("%d", sec);


}