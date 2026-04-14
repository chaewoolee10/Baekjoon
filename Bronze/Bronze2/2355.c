// 2355
#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);
    long long int b;
    scanf("%lld", &b);

    long long int large = a > b ? a : b;
    long long int small = a > b ? b : a;

    long long int n = (large - small) + 1;
    long long int sum = n * (large + small) / 2;
    printf("%lld", sum);
}