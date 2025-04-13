//1789
#include <stdio.h>

int main()
{
    long long int n; scanf("%lld", &n);
    
    int i = 1;
    int count = 0;
    while(1)
    {
        n -= i;
        i++;
        count++;
        if(n < i)
        {
            break;
        }
        
    }
    printf("%d", count);
}