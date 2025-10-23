// 16017
#include <stdio.h>

int main()
{
    int arr[4] = {};
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr[0] == 8 || arr[0] == 9)
    {
        if (arr[1] == arr[2])
        {
            if (arr[3] == 8 || arr[3] == 9)
            {
                printf("ignore");
            }
            else
            {
                printf("answer");
            }
        }
        else
        {
            printf("answer");
        }
    }
    else
    {
        printf("answer");
    }
}