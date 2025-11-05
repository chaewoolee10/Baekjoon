//30224
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int sevencheck = 0;
    int div_seven = n % 7;
    
    while(1)
    {
        int a = n % 10;
        n /= 10;
        if(a == 7)
        {
            sevencheck = 1;
        }
        if(n == 0)
        {
            break;
        }
    }
    
    if(div_seven != 0 && sevencheck == 0)
    {
        printf("0");
    }
    else if(div_seven == 0 && sevencheck == 0)
    {
        printf("1");
    }
    else if(div_seven != 0 && sevencheck == 1)
    {
        printf("2");
    }
    else if(div_seven == 0 && sevencheck == 1)
    {
        printf("3");
    }
}