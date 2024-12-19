//2231
#include <stdio.h>
int div(int i)
{
    int plus = 0;

    while(i != 0)
    {
        plus += i % 10;
        i /= 10;
    }
    return plus;
}

int main()
{
    int n; scanf("%d", &n);
    
    int m = 0;

    for(int i = 1; i <= n; i++)
    {
        m = i + div(i);
        if(m == n)
        {
            printf("%d\n", i);
            return 0;
        }
        m = 0;
    }  
    printf("0\n");
}