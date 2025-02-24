//14489
#include <stdio.h>

int main()
{
    int a = 0; scanf("%d", &a);
    int b = 0; scanf("%d", &b);
    
    int c = 0; scanf("%d", &c);
    
    if(a + b >= c * 2)
    {
        printf("%d", a + b - (c * 2));
    }
    else 
    {
        printf("%d", a + b);
    }
}