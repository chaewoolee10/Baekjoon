//2747
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[46] = {0};
    arr[1] = 1;
    
    for(int i = 2; i < 46; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    printf("%d",arr[n]);        

}