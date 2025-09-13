//5341
#include <stdio.h>

int main()
{
    while(1)
    {
        int n; scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        unsigned long long int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += i + 1;
        }
        printf("%llu\n", sum);
    }
}