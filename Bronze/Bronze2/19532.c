//19532
#include <stdio.h>

int main()
{
    int arr[6] = {};
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]); //a b c d e f
    }
    
    for(int x = -999; x < 1000; x++)
    {
        for(int y = -999; y < 1000; y++)
        {
            if(arr[0] * x + arr[1] * y == arr[2] && arr[3] * x + arr[4] * y ==  arr[5])
            {
                printf("%d %d",x,y);
                break;
            }
        }
    }
    
}
