// 5347
/*
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        long long int a; scanf("%lld", &a);
        long long int b; scanf("%lld", &b);

        int a_mul = 1;
        int b_mul = 1;

        while(1)
        {
            if(a * a_mul == b * b_mul)
            {
                printf("%lld\n", a * a_mul);
                break;
            }
            if(a * a_mul > b * b_mul)
            {
                b_mul++;
            }
            else
            {
                a_mul++;
            }
        }
    }
}*/
#include <stdio.h>
long long int gcd_cal(long long int a, long long int b);
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int a;
        scanf("%lld", &a);
        long long int b;
        scanf("%lld", &b);

        long long int lcm = a * b / gcd_cal(a, b);
        printf("%lld\n", lcm);
    }
}
long long int gcd_cal(long long int a, long long int b)
{
    long long int gcd = 1;
    while (1)
    {
        long long int c = a % b;
        if (c == 0)
        {
            gcd = b;
            return gcd;
        }
        a = b;
        b = c;
    }
}