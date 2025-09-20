// 24736
#include <stdio.h>

int main()
{
    int arr[5] = {6, 3, 2, 1, 2};
    int sum1 = 0;

    for (int j = 0; j < 5; j++)
    {
        int a;
        scanf("%d", &a);
        sum1 += a * arr[j];
    }

    int sum2 = 0;

    for (int j = 0; j < 5; j++)
    {
        int a;
        scanf("%d", &a);
        sum2 += a * arr[j];
    }

    printf("%d %d", sum1, sum2);
}