//34217
#include <stdio.h>

int main()
{
    int arr[4] = {};
    
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    if(arr[0] + arr[2] < arr[1] + arr[3])
    {
        printf("Hanyang Univ.");
    }
    else if(arr[0] + arr[2] > arr[1] + arr[3])
    {
        printf("Yongdap");
    }
    else
    {
        printf("Either");
    }
}