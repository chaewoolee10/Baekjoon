//28352
//10! = 6주
//11! = 10 * 11 = 66주

#include <stdio.h>

int main()
{
    unsigned long long int a = 6;
    int n; scanf("%d", &n);
    for(int i = 11; i <= n; i++)
    {
        a *= i;
    }
    printf("%llu", a);
}