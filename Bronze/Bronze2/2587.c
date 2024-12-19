//2587
#include <stdio.h>

int main()
{
    int arr[5] = {0};
    int sum = 0;
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];    
    }
    
    
    int a = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("%d\n%d",sum/5 ,arr[2]);
    
}