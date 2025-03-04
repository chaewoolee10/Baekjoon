//28281
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[100000] = {};
    int x; scanf("%d", &x);
    
    long long int min = 2000;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n - 1; i++)
    {
        int a = arr[i] + arr[i + 1];
        if(a < min)
        {
            min = a;
        }
    }
    
    printf("%lld", min * x);
}