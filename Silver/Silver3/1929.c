// 1929
#include <stdio.h>

int arr[10000005] = {};

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    for (int i = 2; i <= m; i++) // 초기값
    {
        arr[i]++;
    }
    
    for (int i = 2; i <= m; i++)
    {
        if (arr[i] == 1)
        {
            for (int j = 2; j <= m; j++)
            {
                if (j * i > m)
                {
                    break;
                }
                if (arr[j * i] == 1)
                {
                    arr[j * i]--;
                }
            }
        }
        else
        {
            continue;
        }
    }
    
    for(int i = n; i <= m; i++)
    {
        if(arr[i] == 1)
        {
            printf("%d\n", i);
        }
    }
}