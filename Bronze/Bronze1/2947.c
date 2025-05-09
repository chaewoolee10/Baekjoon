//2947
#include <stdio.h>
void sortingfunc(int *arr);
int checker(int *arr);
void printer(int *arr);

int main()
{
    int arr[5] = {};
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    sortingfunc(arr);
}

void sortingfunc(int *arr)
{
    while(1)
    {
        for(int i = 0; i < 5 - 1; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                int a = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = a;
                printer(arr);
            }
        }
        
        int check = checker(arr);
        if(check == 1)
        {
            break;
        }
    }
}

int checker(int *arr)
{
    int check = 1;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] != i + 1)
        {
            check = 0;
        }
    }
    return check;
}

void printer(int *arr)
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
