// 9506
#include <stdio.h>

int main()
{
    int n;
    int arr[100] = {};
    while (1)
    {
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        int sum = 0;
        int j = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                arr[j] = i;
                j++;
            }
        }

        if (sum == n)
        {
            printf("%d = ", n);
            for(int i = 0; i < j; i++)
            {
                printf("%d ", arr[i]);
                if(i != j - 1)
                {
                    printf("+ ");
                }
            }
            printf("\n");
        }
        else
        {
            printf("%d is NOT perfect.\n", n);
        }
    }
}