// 2033
#include <stdio.h>

void round_gen(int n, int *arr);

int main()
{
    int n; scanf("%d", &n);
    int arr[10] = {};
    if(n < 10)
    {
        printf("%d", n);
    }
    else
    {
        round_gen(n, arr);
    }
}

void round_gen(int n, int *arr)
{
    int a = n;
    int length = 0;
    while (1)
    {
        if(a == 0)
        {
            break;
        }
        a /= 10;
        length++;
    }
    arr[0] = 0;
    for(int i = length; i > 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    for(int i = length; i > 0; i--)
    {
        if(arr[i] >= 5 && i != 1)
        {
            arr[i] = 0;
            arr[i - 1]++;
            if(arr[i - 1] == 10)
            {
                arr[i - 1] = 0;
                arr[i - 2]++;
            }
        }
        else if(arr[i] < 5 && i != 1)
        {
            arr[i] = 0;
        }
    }
    for(int i = 0; i <= length; i++)
    {
        if(i == 0 && arr[i] == 0)
        {
            continue;
        }
        printf("%d", arr[i]);
    }
}