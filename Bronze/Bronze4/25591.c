//25591
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    int a = 100 - n;
    int b = 100 - m;
    printf("%d %d ", a, b);
    
    int c = 100 - (a + b);
    int d = a * b;
    printf("%d %d ", c, d);
    
    int q = d / 100;
    int r = d % 100;
    printf("%d %d ", q, r);
    printf("\n");
    printf("%d %d", c + q, r);
    
}