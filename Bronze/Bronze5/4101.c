//4101
#include <stdio.h>

int main()
{
    while(1)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);
        
        if(a == 0 && b == 0)
        {
            return 0;
        }
        else
        {
            a > b ? printf("Yes\n") : printf("No\n");
        }
        
    }
}