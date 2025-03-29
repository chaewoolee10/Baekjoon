//27433
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    long long int fact = 1;
    
    for(int i = 1; i <= n; i++)
    {
        fact *= i;    
    }
    if(n == 0)
    {
        printf("1");
    }
    else
    {
        printf("%lld", fact);    
    }
    
}