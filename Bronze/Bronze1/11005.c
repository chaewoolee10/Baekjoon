// 11005
#include <stdio.h>

char calculator(long long int n, int base);

int main()
{
    long long int n;
    scanf("%lld", &n);
    int base;
    scanf("%d", &base);
    char str[55] = {};
    for (int i = 0; i < 55; i++)
    {
        str[i] = '|';
    }
    if (n == 0)
    {
        printf("0");
    }
    else
    {
        int i = 0;
        while (1)
        {
            if (n == 0)
            {
                break;
            }
            else
            {
                str[50 - i - 1] = calculator(n, base);
                n /= base;
                i++;
            }
        }
        for (int j = 0; j < 55; j++)
        {
            if (str[j] != '|')
            {
                printf("%c", str[j]);
            }
        }
    }
}

char calculator(long long int n, int base)
{
    int remainder = n % base;

    if (remainder < 10)
    {
        return remainder + '0';
    }
    else
    {
        return (remainder - 10) + 'A';
    }
}