//17388
#include <stdio.h>

int main()
{
    int arr[3] = {};
    int min = 100;
    int sum = 0;
    int minidx = 0;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] < min)
        {
            min = arr[i];
            minidx = i;
        }
        sum += arr[i];
    }
    if(sum >= 100)
    {
        printf("OK");
    }
    else
    {
        switch (minidx)
        {
        case 0:
            printf("Soongsil");
            break;
        case 1:
            printf("Korea");
            break;
        case 2:
            printf("Hanyang");
            break;
        }
    }
    
}