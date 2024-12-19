//15726
#include <stdio.h>

int main()
{
    double a; scanf("%lf", &a);
    double b; scanf("%lf", &b);
    double c; scanf("%lf", &c);

    int mul_first = (a * b / c);
    int div_first = (a / b * c);

    mul_first > div_first ? printf("%d", mul_first) : printf("%d", div_first);
    
}