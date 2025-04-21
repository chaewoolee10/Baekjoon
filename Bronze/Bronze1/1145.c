//1145
#include <stdio.h>

int mulchecker(int *arr);

int main()
{
    int arr[5] = {};
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("%d", mulchecker(arr));
}

int mulchecker(int *arr)
{
    int count = 0;
    int mul = 2;
    while(1)
    {
        for(int i = 0; i < 5; i++)
        {
            if(mul % arr[i] == 0)
            {
                count++;
            }
        }
        if(count >= 3)
        {
            return mul;
        }
        else
        {
            count = 0;
            mul++;
        }   
    }
}