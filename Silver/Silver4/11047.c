//11047
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    
    int arr[10] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        count += k / arr[i];
        k -= (k / arr[i]) * arr[i];
        if(k <= 0)
        {
            break;
        }
    }
    printf("%d", count);
}