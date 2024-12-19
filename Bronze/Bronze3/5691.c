//5691
#include <stdio.h>

int main()
{
    int a;
    int b;
    while(1)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        if(a == 0 && b == 0)
        {
            break;
        }
        printf("%d\n", 2 * a - b); //b - a == a - k , b + k == 2 * a; a+b+k = 3a, k = 2a - b
    }
    
}