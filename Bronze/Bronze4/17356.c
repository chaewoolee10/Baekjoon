//17356
#include <stdio.h>
#include <math.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    double m = (double)(b - a) / 400.0;
    double result = 1.0/(1.0+pow(10.0, m));
    printf("%lf", result);
    
}