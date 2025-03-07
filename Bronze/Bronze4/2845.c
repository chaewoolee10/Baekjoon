//2845
#include <stdio.h>

int main()
{
    int arr[5] = {};
    int n; scanf("%d", &n);
    int sqr; scanf("%d", &sqr);
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] = arr[i] - n * sqr;
    }
    for(int i = 0; i < 5; i++)
    {
       printf("%d ", arr[i]);
    }
       
    
}