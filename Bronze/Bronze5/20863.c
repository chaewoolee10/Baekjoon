//20863
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    if(a > b)
    {
        a -= 24;
        printf("%d", b - a);
    }
    else
    {
        printf("%d", b - a);
    }
    
}