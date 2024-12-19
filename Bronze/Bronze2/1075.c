//1075
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int f; scanf("%d", &f);
    int k = 0;
    n /= 100;
    n *= 100;
    
    for(int i = 0; i < 100; i++)
    {
        n += k;
        if(n % f == 0)
        {
            break;
        }
        else
        {
            n -= k;
        }
        k++;
    }
    if(k < 10)
    {
        printf("0%d", k);
    }
    else
    {
        printf("%d", k);    
    }
    
    
}