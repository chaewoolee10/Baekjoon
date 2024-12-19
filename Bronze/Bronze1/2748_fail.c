//2748
#include <stdio.h>
#include <math.h>

int main()
{
    long long int n; scanf("%lld", &n);
    long long int fib = (1.0/sqrt(5.0)) * (pow(((1.0+sqrt(5.0))/2.0), n) - pow(((1.0-sqrt(5.0))/2.0), n));
    
    printf("%lld", fib);
}
