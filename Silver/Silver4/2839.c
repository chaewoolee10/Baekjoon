// 2839
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10000] = {};
    if (n % 5 == 0)
    {
        printf("%d", n / 5);
        return 0;
    }
    else
    {
        if (n % 3 == 0)
        {
            arr[0] = n / 3;
        }
        int count = 0;
        int i = 0;
        while (1)
        {
            n -= 5;
            if(n < 0)
            {
                break;    
            }
            count++;
            if (n % 3 == 0)
            {
                arr[i + 1] = count + n / 3;
            }
            i++;

        }
    }
    int min = 5000;
    int check = 0;
    for (int i = 0; i < 10000; i++)
    {
        if(arr[i] != 0)
        {
            check = 1;
        }
        if(min > arr[i] && arr[i] != 0)
        {
            min = arr[i];
        }
    }
    if(check == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", min);    
    }
}