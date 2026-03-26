//1817
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    int arr[50] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int sum = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(sum + arr[i] <= m)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            sum = arr[i];
        }
    }
    if(sum != 0) count++;
    printf("%d", count);
}