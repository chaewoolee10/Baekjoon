//34183
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    n *= 3;
    int m; scanf("%d", &m);
    n -= m;
    
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    if(n <= 0)
    {
        printf("0");
    }
    else
    {
        int price = n * a + b;
        printf("%d", price);
    }
    
}