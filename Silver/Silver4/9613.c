// 9613
#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[100] = {};
        long long int gcd_sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                //printf("%d %d %d\n", arr[j], arr[k], gcd(arr[j], arr[k]));
                gcd_sum += gcd(arr[j], arr[k]);
            }
        }
        printf("%lld\n", gcd_sum);
    }
}
int gcd(int a, int b)
{
    while (1)
    {
        int r = a % b;
        if (r == 0)
            return b;
        a = b;
        b = r;
    }
}