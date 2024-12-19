//1037
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int arr[50] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    if(n == 1)
    {
        printf("%d", arr[0] * arr[0]);    
    }
    else
    {
        printf("%d", arr[0] * arr[n-1]);
    }
    
}