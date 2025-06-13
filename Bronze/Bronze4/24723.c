//24723
#include <stdio.h>

int main()
{
    int sum = 1;
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        sum *= 2;
    }
    printf("%d", sum);
}