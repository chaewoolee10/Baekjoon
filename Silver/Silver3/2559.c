//2559
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int day; scanf("%d", &day);
    
    int arr[100005] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int interval_sum[100005] = {};
    for(int i = 0; i < n; i++)
    {
        if(i + day > n)
        {
            n = i;
            break;
        }
        for(int j = i; j < i + day; j++)
        {
            interval_sum[i] += arr[j];
        }
    }
    int max = interval_sum[0];
    for(int i = 0; i < n; i++)
    {
        if(max < interval_sum[i])
        {
            max = interval_sum[i];
        }
    }
    
    printf("%d", max);
    
}