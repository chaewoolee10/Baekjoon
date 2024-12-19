//11720

#include <stdio.h>
int sum(long long int n, int i)
{
    int a = 0;
    for(int j = 0; j <= i; j++)
    {
        printf("%lld\n",n);
        a += n%10;
        n /= 10;
        
    }
    return a;
}

int main()
{
    long long int n; 
    int i;
    scanf("%d",&i);
    scanf("%lld",&n);

    printf("%d",sum(n,i));
}