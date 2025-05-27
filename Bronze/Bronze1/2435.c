//2435
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    
    int arr[100] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = 0;
    for(int i = 0; i < n - (k - 1); i++)
    {
        int sum = 0;
        for(int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }
        if(i == 0)
        {
            max = sum;
        }
        else
        {
            if(max < sum)
            {
                max = sum;
            }
        }
    }
    printf("%d", max);
}