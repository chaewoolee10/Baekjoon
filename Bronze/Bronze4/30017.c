//30017
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    if(a > b)
    {
        a = b + 1;
    }
    else if(a == b)
    {
        b--;
    }
    else
    {
        b = a - 1;
    }
    printf("%d", a + b);

}