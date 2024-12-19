//1264
#include <stdio.h>
#include <string.h>

int vowel(char c)
{
    switch(c)
    {
        case 'a':
            return 1;
            break;
        case 'e':
            return 1;
            break;
        case 'i':
            return 1;
            break;
        case 'o':
            return 1;
            break;
        case 'u':
            return 1;
            break;
        case 'A':
            return 1;
            break;
        case 'E':
            return 1;
            break;
        case 'I':
            return 1;
            break;
        case 'O':
            return 1;
            break;
        case 'U':
            return 1;
            break;
        
        default:
            return 0;
            break;
    }
}

int main()
{

    while(1)
    {
        int count = 0;
        char str[255]; scanf("%[^\n]s", str);
        getchar();
        if(str[0] == '#')
        {
            break;
        }
        else
        {
            for(int i = 0; i < strlen(str); i++)
            {
                count += vowel(str[i]);
            }
            printf("%d\n", count);
        }
    }
}