//3052
#include <stdio.h>

int main()
{
    int arr[10];
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] %= 42; //arr이 나머지만 저장한 배열이 됨 0<=나머지<=41
    }

    for(int i = 0; i < 42; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(arr[j] == i)
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}