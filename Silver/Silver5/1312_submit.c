//1312
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    int n; scanf("%d", &n);
    
    int remainder = 0;
    int divider = 0;
    for(int i = 0; i < n + 1; i++)
    {
        remainder = a % b;
        divider = a / b;
        a = remainder * 10;
    }
    printf("%d", divider);
    
}