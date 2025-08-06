//2003
#include <stdio.h>

int arr[10004] = {};
int prefix[10004] = {};

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    
    prefix[0] = 0;
    prefix[1] = arr[0];
    
    for(int i = 2; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(prefix[j] - prefix[i] == m)
            {
                count++;
            }
        }
    }
    printf("%d", count);
}