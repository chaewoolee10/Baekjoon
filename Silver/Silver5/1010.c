// 1010
#include <stdio.h>

void arr_prime(int *arr, int n);

int main()
{
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int n; scanf("%d", &n);
        int m; scanf("%d", &m);
        int n_arr[33] = {};
        for(int j = 1; j <= n; j++)
        {
            arr_prime(n_arr, j);
        }
        int m_arr[33] = {};
        for(int j = 1; j <= m; j++)
        {
            arr_prime(m_arr, j);
        }
        int m_minus_n_arr[33] = {};
        for(int j = 1; j <= m - n; j++)
        {
            arr_prime(m_minus_n_arr, j);
        }
        
        for(int j = 1; j <= m; j++) // m! / (n! * (m - n)!)
        {
            m_arr[j] -= (n_arr[j] + m_minus_n_arr[j]);
        }
        long long int sum = 1;
        for(int j = 1; j <= m; j++)
        {
            for(int k = 0; k < m_arr[j]; k++)
            {
                sum *= j;
            }
        }
        printf("%lld\n", sum);
    }
}
void arr_prime(int *arr, int n)
{
    arr[n]++;
    for (int i = n; i >= 2; i--)
    {
        int count = arr[i];
        for (int k = 0; k < count; k++)
        {
            int a = i;
            int j = 2;
            while (1)
            {
                if (a == 1 || a < j)
                {
                    break;
                }
                if (a % j == 0)
                {
                    a /= j;
                    arr[j]++;
                }
                j++;
                
            }
            arr[a]++;
            arr[i]--;
        }
    }
}