//10867
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[100000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = -1000; i <= 1000; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == arr[j])
            {
                printf("%d ", arr[j]);
                break;
            }
        }
    }
    
}