//13623
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    int c; scanf("%d", &c);

    if(a == b && b == c)
    {
        printf("*");
    }
    else if(a != b && b == c)
    {
        printf("A");
    }
    else if(a == b && b != c)
    {
        printf("C");
    }
    else if(a != b && a == c)
    {
        printf("B");
    }
    
}