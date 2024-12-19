//2798
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);

    int arr[100];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0;

    for(int i = 0; i <= n - 3; i++)
    {
        for(int j = i + 1; j <= n - 2; j++)
        {
            for(int k = j + 1; k <= n - 1; k++)
            {
                int a = arr[i] + arr[j] + arr[k];
                if(m == a)
                {
                    max = a;
                    break;
                }
                else if(max < a && a < m)
                {
                    max = a;
                }

            }
        }
    }
    printf("%d", max);   
}