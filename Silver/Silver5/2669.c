// 2669
#include <stdio.h>

int main()
{
    int arr[103][103] = {};
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        int x_left;
        scanf("%d", &x_left);
        int y_left;
        scanf("%d", &y_left);
        int x_right;
        scanf("%d", &x_right);
        int y_right;
        scanf("%d", &y_right);

        for (int j = x_left; j < x_right; j++)
        {
            for (int k = y_left; k < y_right; k++)
            {
                arr[k][j]++;
            }
        }
        // for (int j = 0; j <= 100; j++)
        // {
        //     for (int k = 0; k <= 100; k++)
        //     {
        //         printf("%d", arr[k][j]);
        //     }
        //     printf("\n");
        // }
    }
    for (int j = 0; j <= 100; j++)
    {
        for (int k = 0; k <= 100; k++)
        {
            if(arr[k][j] > 0)
            {
                sum++;
            }
        }
        //printf("%d\n", sum);
    }
    printf("%d", sum);
}