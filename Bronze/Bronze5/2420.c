//2420
#include <stdio.h>

int main()
{
    long int n; scanf("%ld", &n);
    long int m; scanf("%ld", &m);

    long long int k = n-m;

    k > 0 ? printf("%lld\n", k) : printf("%lld\n", -1*k);
    
}
