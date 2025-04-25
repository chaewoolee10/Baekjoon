//7891
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        long long int a; scanf("%lld", &a);
        long long int b; scanf("%lld", &b);
        
        printf("%lld\n", a + b);
    }
}