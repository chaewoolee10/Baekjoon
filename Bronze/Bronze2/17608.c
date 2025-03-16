//17608
#include <stdio.h>



int main()
{
    int n; scanf("%d",&n);    
    int arr[100000] = {};
    
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int target = arr[n - 1];
    int count = 1;
    
    for(int i = n - 2; i >= 0; i--)
    {
        if(target < arr[i])
        {
            target = arr[i];
            count++;
        }
    }
    printf("%d", count);
}