//14405
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5005] = {}; scanf("%s", str);
    int len = strlen(str);
    int checker = 1;
    for(int i = 0; i < len; i++)
    {
        switch (str[i])
        {
        case 'p':
            if(str[i + 1] == 'i')
            {
                i++;
            }
            else
            {
                checker = 0;
            }
            break;
        case 'k':
            if(str[i + 1] == 'a')
            {
                i++;
            }
            else
            {
                checker = 0;
            }
            break;
        case 'c':
            if(str[i + 1] == 'h' && str[i + 2] == 'u')
            {
                i += 2;
            }
            else
            {
                checker = 0;
            }
            break;
        default:
            checker = 0;
            break;
        }
        if(checker == 0)
        {
            break;
        }
    }
    checker == 0 ? printf("NO") : printf("YES");
}