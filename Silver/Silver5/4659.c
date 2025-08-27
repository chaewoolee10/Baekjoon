// 4659
#include <stdio.h>
#include <string.h>

int vowelcheck(char *str);
int seqcheck(char *str);
int dupcheck(char *str);
int vowel(char c);
int consonant(char c);

int main()
{
    while (1)
    {
        char str[25] = {};
        scanf("%s", str);
        int check = 1;
        if (!strcmp(str, "end"))
        {
            break;
        }
        if (!vowelcheck(str))
        {
            check = 0;
        }
        else if (!seqcheck(str))
        {
            check = 0;
        }
        else if (!dupcheck(str))
        {
            check = 0;
        }
        printf("<%s> is ", str);
        if (!check)
            printf("not ");
        printf("acceptable.\n");
    }
}
int vowelcheck(char *str)
{
    int length = strlen(str);
    int check = 0;
    for (int i = 0; i < length; i++)
    {
        if (vowel(str[i]))
        {
            check = 1;
        }
    }
    return check;
}
int seqcheck(char *str)
{
    int length = strlen(str);
    int check = 1;
    if (length < 3)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < length - 2; i++)
        {
            if (vowel(str[i]) == 1 && vowel(str[i + 1]) == 1 && vowel(str[i + 2]) == 1)
            {
                check = 0;
            }
            else if (consonant(str[i]) == 1 && consonant(str[i + 1]) == 1 && consonant(str[i + 2]) == 1)
            {
                check = 0;
            }
        }
        return check;
    }
}
int dupcheck(char *str)
{
    int length = strlen(str);
    int check = 1;
    for (int i = 0; i < length - 1; i++)
    {
        if ((str[i] != 'e' && str[i] != 'o') && str[i] == str[i + 1])
        {
            check = 0;
        }
    }
    return check;
}
int vowel(char c)
{
    if (c == 'a' || c == 'e' ||
        c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int consonant(char c)
{
    if (c != 'a' && c != 'e' &&
        c != 'i' && c != 'o' && c != 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}