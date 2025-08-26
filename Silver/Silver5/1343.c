// 1343
#include <stdio.h>
#include <string.h>

void str_check(int addr, int a, char *str);

int main()
{
    int n;
    scanf("%d", &n);

    char str[54] = {};
    scanf("%s", str);
    int length = strlen(str);
    char str2[54] = {};

    int a = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'X')
        {
            a++;
        }
        else if (str[i] == '.')
        {
            str2[i] = '.';
            if (a % 2 == 1)
            {
                printf("-1");
                return 0;
            }
            str_check(i - a, a, str2);
            a = 0;
        }
        if (i == length - 1)
        {
            if (a % 2 == 1)
            {
                printf("-1");
                return 0;
            }
            str_check(i - a + 1, a, str2);
        }
    }
    printf("%s\n", str2);
}
void str_check(int addr, int a, char *str)
{
    int A = a / 4;
    a -= A * 4;
    int B = a / 2;
    a -= B * 2;
    for (int i = addr; i < addr + 4 * A; i++)
    {
        str[i] = 'A';
    }
    addr += 4 * A;
    for (int i = addr; i < addr + 2 * B; i++)
    {
        str[i] = 'B';
    }
}