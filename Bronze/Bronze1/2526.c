// 2526
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int p;
    scanf("%d", &p);
    int arr[100] = {};
    int output = n * n;
    int idx1 = 0;
    int idx2 = 0;
    
    for (int i = 0; i < 100; i++)
    {
        arr[i] = output % p;
        output = arr[i] * n;

        int checker = 0;

        for (int j = 0; j < i - 1; j++)
        {
            int target = arr[j];

            for (int k = j + 1; k < i; k++)
            {
                if (target == arr[k])
                {
                    checker = 1;
                    idx1 = k;
                    break;
                }
            }
            if (checker == 1)
            {
                idx2 = j;
                break;
            }
        }
        if (checker == 1)
        {
            break;
        }
    }
    printf("%d", idx1 - idx2);
}
