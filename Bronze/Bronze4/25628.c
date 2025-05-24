//25628
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    a /= 2;
    
    a < b ? printf("%d", a) : printf("%d", b);
}