// 1526
#include <stdio.h>

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
    if (arr[i - 1] < 4)
    {
        arr[i - 1] = 0;
        arr[i - 2] = 7;
    }
    for (int j = i - 2; j >= 0; j--)
    {
        if (arr[j] < 4 && arr[j + 1] == 7)
        {
            arr[j + 1] = 4;
            arr[j] = 7;
            arr[j - 1] = 10;
        }
        if(arr[j] > 7)
        {
            arr[j] = 7;
        }
    }
    for (int k = 0; k < i; k++)
    {
        if (arr[i - k - 1] == 0)
        {
            continue;
        }
        printf("%d", arr[i - k - 1]);
    }
}