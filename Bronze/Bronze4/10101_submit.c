// 10101
#include <stdio.h>

int main()
{
    int arr[3] = {};
    int anglesum = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        anglesum += arr[i];
    }
    if (anglesum != 180)
    {
        printf("Error");
    }
    else
    {
        if (*arr == *(arr + 1) && *arr == *(arr + 2))
        {
            printf("Equilateral");
        }
        else if(*arr == *(arr + 1) || *arr == *(arr + 2) || *(arr + 1) == *(arr + 2))
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
}