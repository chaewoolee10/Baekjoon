//2752
#include <stdio.h>

int main()
{
    int arr[3];
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    int a = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i] < arr[j])
            {
                a = arr[j];
                arr[j] = arr[i];
                arr[i] = a;
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
       
}
