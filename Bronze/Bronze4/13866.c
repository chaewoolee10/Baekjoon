//13866
#include <stdio.h>

int main()
{
    int arr[4] = {};
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int diff = (arr[3] + arr[0]) - (arr[2] + arr[1]);
    if(diff < 0)
    {
        diff *= -1;
    }
    
    printf("%d", diff);
}
