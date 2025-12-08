//31994
#include <stdio.h>

int main()
{
    int arr[7] = {};
    char str[7][100] = {};
    for(int i = 0; i < 7; i++)
    {
        scanf("%s", str[i]);
        getchar();
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int max_idx = 0;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
    }
    printf("%s", str[max_idx]);
}