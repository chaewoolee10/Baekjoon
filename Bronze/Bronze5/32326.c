// 32326
#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 3; i < 6; i++)
    {
        int a; scanf("%d", &a);
        sum += a * i;
    }
    printf("%d", sum);
}