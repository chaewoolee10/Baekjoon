//21300
#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i < 6; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a * 5;
    }
    printf("%d", sum);
}