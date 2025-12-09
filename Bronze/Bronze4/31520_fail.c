//31520
#include <stdio.h>

int main()
{
    long long int n; scanf("%lld", &n);
    int k = 0;
    int length = 0;
    long long int a = n;
    while (1)
    {
        if(a == 0)
        {
            break;
        }
        a /= 10;
        length++;
        
    }
    a = n;
    if(length > 10)
    {
        if(n % 10 == 0 && (n % 100) / 10 == 1)
        {
            n /= 100;
            for(int i = 0; i < length - 2; i++)
            {
                if(n % 10 <= (n % 100) / 10)
                {
                    printf("-1");
                    return 0;
                }
                n /= 10;
            }
            printf("10");
            return 0;
        }
        else
        {
            printf("-1");
            return 0;
        }
    }
    else
    {
       for(int i = 0; i < length; i++)
        {
            if(n % 10 <= (n % 100) / 10)
            {
                printf("-1");
                return 0;
            }
            n /= 10;
            if(i == length - 2 && n != 1)
            {
                printf("-1");
                return 0;
            }
        }
    }
    printf("%lld", a % 10);
    
}