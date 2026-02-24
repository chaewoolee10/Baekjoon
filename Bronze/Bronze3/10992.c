// 10992
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        if (i == n)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                if(j == 0 || j == 2 * i - 2)
                {
                    printf("*");   
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}