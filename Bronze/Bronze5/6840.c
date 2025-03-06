//6840
#include <stdio.h>

int main()
{
    int arr[3] = {};
    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);
    scanf("%d", &arr[2]);
    
    int max = arr[0];
    int maxidx = 0;
    int min = arr[0];
    int minidx = 0;
    
    for(int i = 0; i < 3; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            maxidx = i;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            minidx = i;
        }
    }
    
    int mididx = 0;
    for(int i = 0; i < 3; i++)
    {
        if(i != maxidx && i != minidx)
        {
            mididx = i;
        }
    }
    printf("%d", arr[mididx]);
}