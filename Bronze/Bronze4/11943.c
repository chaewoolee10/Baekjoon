//11943
#include <stdio.h>

int main()
{
    int arr[4] = {};
    int count1 = 0;
    int count2 = 0;
    
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 2; i++)
    {
        if(i == 0)
        {
            count1 = arr[i] + arr[3 - i];
        }
        else
        {
            count2 = arr[i] + arr[3 - i];
        }
    }
    count1 < count2 ? printf("%d", count1) : printf("%d", count2);
    
}