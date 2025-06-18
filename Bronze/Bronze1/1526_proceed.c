// 1526
#include <stdio.h>

int checker(int *arr, int i);

int main()
{
    int arr[7] = {};
    int n;
    scanf("%d", &n);
    int i = 0;
    while (1)
    {
        if (n == 0)
        {
            break;
        }
        arr[i] = n % 10;
        n /= 10;
        i++;
    }

    if (checker(arr, i) == 1)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > 7)
            {
                arr[j] = 7;
            }
            if (arr[j] < 4 && j != i - 1)
            {
                arr[j + 1]--;
                arr[j] = 7;
            }
            if (arr[j] >= 4 && arr[j] < 7)
            {
                if (j != i - 1)
                {
                    arr[j] = 7;
                    arr[j + 1]--;
                }
                else
                {
                    arr[j] = 4;
                }
            }
            if (arr[i - 1] == 0)
            {

                break;
            }
        }
        if (arr[i - 1] <= 3 && arr[i - 1] > 0)
        {
            arr[i - 1] = 0;
        }
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if (arr[j] == 0)
        {
            continue;
        }
        printf("%d", arr[j]);
    }
}

int checker(int *arr, int i)
{
    int check = 0;
    for (int j = 0; j < i; j++)
    {
        if (arr[j] != 4 && arr[j] != 7)
        {
            check = 1;
        }
    }
    return check;
}