// 10990
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        printf("*");
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}