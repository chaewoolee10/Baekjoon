//32929
#include <stdio.h>

int main()
{
    unsigned long long int n;
    scanf("%llu", &n);
    int num = n % 3;
    if(num == 1)
    {
        printf("U");
    }
    else if(num == 2)
    {
        printf("O");
    }
    else
    {
        printf("S");
    }
}