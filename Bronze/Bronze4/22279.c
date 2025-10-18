//22279
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        double q; scanf("%lf", &q);
        double y; scanf("%lf", &y);
        q *= 10;
        y *= 10;
        
        sum += (int)q * (int)y;
        
    }
    printf("%.3lf", (double)(sum) / 100.0);
}