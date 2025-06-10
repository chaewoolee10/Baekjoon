//26209
#include <stdio.h>

int main()
{
    int check = 0;
    int arr[8] = {};
    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 8; i++)
    {
        if(arr[i] != 0 && arr[i] != 1)
        {
            check = 1;
        }
    }
    
    if(check == 0)
    {
        printf("S");
    }
    else
    {
        printf("F");
    }
}