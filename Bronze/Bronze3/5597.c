//5597
#include <stdio.h>

int main()
{
    int arr[28];
    for(int i = 0; i < 28; i++)
    {
        scanf("%d", &arr[i]);       
    }

    for(int i = 1; i <= 30; i++)
    {
        for(int j = 0; j < 28; j++)
        {
            if(i == arr[j])
            {
                break;
            }
            if(j == 27 && i != arr[j])
            {
                printf("%d\n",i);
            }
        }
    }
}