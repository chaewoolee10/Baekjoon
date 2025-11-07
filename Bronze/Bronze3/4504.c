//4504
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    while(1)
    {
        int a; scanf("%d", &a);
        if(a == 0)
        {
            break;
        }
        printf("%d is", a);
        if(a % n != 0)
        {
            printf(" NOT");
        }
        printf(" a multiple of %d.\n", n);
    }
}