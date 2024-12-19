// 2941
#include <stdio.h>
#include <string.h>

int main()
{
    char str[105] = {};
    scanf("%s", str);

    int length = strlen(str);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == '-' || str[i] == '=')
        {
            continue;
        }
        if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
        {
            str[i + 1] = '-';
            count++;
            continue;
        }
        if (str[i] == 'c' && str[i + 1] == '=')
        {
            count++;
            continue;
        }
        if (str[i] == 'c' && str[i + 1] == '-')
        {
            count++;
            continue;
        }
        if (str[i] == 'd' && str[i + 1] == '-')
        {
            count++;
            continue;
        }
        if (str[i] == 'n' && str[i + 1] == 'j')
        {
            str[i + 1] = '-';
            count++;
            continue;
        }
        if (str[i] == 's' && str[i + 1] == '=')
        {
            count++;
            continue;
        }
        if (str[i] == 'z' && str[i + 1] == '=')
        {
            count++;
            continue;
        }
        if (str[i] == 'l' && str[i + 1] == 'j')
        {
            str[i + 1] = '-';
            count++;
            continue;
        }
        count++;
        
    }
    printf("%d", count);
}