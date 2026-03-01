//30468
#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i < 4; i++)
    {
        int a; scanf("%d", &a);
        sum += a;
    }
    int n = 0; scanf("%d", &n);
    n *= 4;
    if(n - sum <= 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", n - sum);
    }
}