//25704
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int p; scanf("%d", &p);
    
    int arr[4] = {-1, -1, -1, -1};
    if(n >= 5)
    {
        arr[0] = p - 500; 
        if(arr[0] <= 0)
        {
            arr[0] = 0;
        }
    }
    if(n >= 10)
    {
        arr[1] = p * 9 / 10;
        if(arr[1] <= 0)
        {
            arr[1] = 0;
        }
    }
    if(n >= 15)
    {
        arr[2] = p - 2000;
        if(arr[2] <= 0)
        {
            arr[2] = 0;
        }
    }
    if(n >= 20)
    {
        arr[3] = p * 3 / 4;
        if(arr[3] <= 0)
        {
            arr[3] = 0;
        }
    }
    int min = p;
    for(int i = 0; i < 4; i++)
    {
        if(arr[i] == 0)
        {
            printf("0");
            return 0;
        }
        if(arr[i] != -1)
        {
            if(min > arr[i])
            {
                min = arr[i];
            }
        }
    }
    printf("%d", min);
}