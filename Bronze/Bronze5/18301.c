//18301
#include <stdio.h>

int main()
{
    int arr[3] = {};
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", (arr[0] + 1)*(arr[1] + 1) / (arr[2] + 1) - 1);
}