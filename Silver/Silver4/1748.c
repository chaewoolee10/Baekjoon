// 1748
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    long long unsigned int count = 0;
    long long unsigned int nine = 9;
    int a = 1;
    int ten = 1;
    if (n > nine)
    {
        while (1)
        {
            if (n < nine)
            {

                break;
            }
            n -= nine;
            count += nine * a;
            //printf("%llu %d %d\n", nine, a, n);
            a++;
            nine *= 10;
        }
    }
    count += a * n;
    printf("%llu", count);
}