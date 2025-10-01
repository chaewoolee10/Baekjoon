//23972
/*
(x - k) * n = x
nx - kn = x
x(n - 1) = kn
x = kn / (n - 1)
*/
#include <stdio.h>

int main()
{
    long long int k; scanf("%lld", &k);
    long long int n; scanf("%lld", &n);
    
    if(n == 1)
    {
        printf("-1");
    }
    else
    {
        long long int x = k;
        while(1)
        {
            if((x - k) * n >= x)
            {
                printf("%lld", x);
                break;
            }
            x++;
            
        }
    }
}