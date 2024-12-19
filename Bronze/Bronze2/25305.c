//25305
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    
    int arr[10000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int a = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;    
            }
            
        }
    }
    printf("%d", arr[k-1]);
}
