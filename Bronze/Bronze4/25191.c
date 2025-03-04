//25191
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    int avail = a / 2 + b;
    
    n > avail ? printf("%d", avail) : printf("%d", n);
}