// 31520
#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    int k = 0;
    int length = 0;
    long long int a = n;
    while (1)
    {
        if (a == 0)
        {
            break;
        }
        a /= 10;
        length++;
    }
    a = n;

    if (length > 1)
    {
        for (int i = 0; i < length; i++)
        {
            if (n % 10 - (n % 100) / 10 != 1)
            {
                printf("-1");
                return 0;
            }
            n /= 10;
            if (i == length - 2 && n != 1)
            {
                printf("-1");
                return 0;
            }
        }
    }
    else
    {
        if (n != 1)
        {
            printf("-1");
            return 0;
        }
    }

    printf("%lld", a % 10);
}