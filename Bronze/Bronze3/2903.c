//2903
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    long long int side = 2;
    int plus = 1;
    
    for(int i = 1; i <= n; i++)
    {
        side += plus;
        plus *= 2;
    }
    printf("%lld", side * side);
}