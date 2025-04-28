//13136
#include <stdio.h>

int main()
{
    long long int r; scanf("%lld", &r);
    long long int c; scanf("%lld", &c);
    int n; scanf("%d", &n);
    
    r = r % n == 0 ? r / n : (r / n) + 1;
    c = c % n == 0 ? c / n : (c / n) + 1;
    
    printf("%lld", r * c);
}