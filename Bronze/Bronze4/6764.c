//6764
#include <stdio.h>
int div(int *arr);
int rise_ck(int *arr);
int constant_ck(int *arr);

int main()
{
    int arr[4] = {};
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int dive = div(arr);
    int rise = rise_ck(arr);
    int constant = constant_ck(arr);
    if(constant == 1)
    {
        printf("Fish At Constant Depth");
    }
    else if(rise == 1)
    {
        printf("Fish Rising");
    }
    else if(dive == 1)
    {
        printf("Fish Diving");
    }
    else
    {
        printf("No Fish");
    }
}
int div(int *arr)
{
    for(int i = 1; i < 4; i++)
    {
        if(arr[i - 1] <= arr[i])
        {
            return 0;
        }
   }
   return 1;
}
int rise_ck(int *arr)
{
    for(int i = 1; i < 4; i++)
    {
        if(arr[i - 1] >= arr[i])
        {
            return 0;
        }
   }
   return 1;
}
int constant_ck(int *arr)
{
    for(int i = 1; i < 4; i++)
    {
        if(arr[i - 1] != arr[i])
        {
            return 0;
        }
   }
   return 1;
}