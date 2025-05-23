// 1010
#include <stdio.h>

int sumcal(int n, int m, int seq);

int main()
{
    int t = 0;
    scanf("%d", &t);

    for (int test = 0; test < t; test++)
    {
        int n = 0;
        scanf("%d", &n);
        int m = 0;
        scanf("%d", &m);
        int sum = 0;

        if (n == 1)
        {
            printf("%d\n", n * m);
        }
        else if (n == 2)
        {
            for (int i = m - n + 1, j = 1; i >= 1; i--, j++)
            {
                sum += i * j;
            }
            printf("%d\n", sum);
        }
        else
        {
            for(int j = 1, mul = m - n + 1; mul >= 1; mul--, j++)
            {
                sum += mul * sumcal(n, m, j);
                printf("%d\n", sum);
            }
            
        }
    }
}
int sumcal(int n, int m, int seq)
{
    int result = 0;
    
    for(int i = 1; i <= seq; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            result += j;
        }
    }
    printf("%d\n", result);
    
    return result;
}