//15892
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    int remainder;
    printf("%d.", n / m);
    for(int i = 0; i < 2000; i++)
    {
        remainder = n % m;
        remainder *= 10;
        printf("%d", remainder / m);
        n = remainder % m;
    }
    
}