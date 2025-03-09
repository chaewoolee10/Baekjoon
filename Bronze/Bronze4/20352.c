//20352
#include <stdio.h>
#include <math.h>

int main()
{
    // pi * r^2 = S,  r = (S/pi)^1/2
    //2 * pi * r = A
    //2 * pi * (S/pi)^1/2 = A
    
    double pi = 3.14159265359;
    unsigned long long int s; scanf("%llu", &s);
    double a = 2 * pi * sqrt((double)s / pi);
    
    printf("%lf", a);
    
}