//23795

#include <stdio.h>

int main()
{
    long long int sum = 0;
    while(1)
    {
        int a; scanf("%d", &a);
        if(a == -1)
        {
            break;
        }
        sum += a;
    }
    printf("%lld", sum);
}