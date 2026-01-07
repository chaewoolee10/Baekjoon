//34921
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int t; scanf("%d", &t);
    
    int p = 10 + 2*(25 - a + t);
    p > 0 ? printf("%d", p) : printf("0");
    
    
}