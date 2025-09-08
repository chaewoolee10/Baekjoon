//2847
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[101] = {};
    int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = n - 1; i >= 1; i--)
    {
        if(arr[i] <= arr[i - 1])
        {
            while(1)
            {
                if(arr[i] - arr[i - 1] == 1)
                {
                    break;
                }
                arr[i - 1]--;
                count++;
            }
        }
    }
    printf("%d", count);
}