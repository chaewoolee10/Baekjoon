// 11728
#include <stdio.h>

int main()
{
    int sum[2000000] = {};
    
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sum[i]);
    }
    for (int i = n; i < n + m; i++)
    {
        scanf("%d", &sum[i]);
    }
    for(int i = 0; i < n + m; i++)
    {
        for(int j = 0; j < n + m; j++)
        {
            if(sum[i] < sum[j])
            {
                int tmp = sum[i];
                sum[i] = sum[j];
                sum[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n + m; i++)
    {
        printf("%d ", sum[i]);
    }
}