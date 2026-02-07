//28453
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[100] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 300)
        {
            arr[i] = 1;
        }
        else if(arr[i] >= 275)
        {
            arr[i] = 2;
        }
        else if(arr[i] >= 250)
        {
            arr[i] = 3;
        }
        else
        {
            arr[i] = 4;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}