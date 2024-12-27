//14215
#include <stdio.h>

int main()
{
    int arr[3] = {};
    int max = 0;
    int maxindex = 0;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        if(max < arr[i])
        {
            max = arr[i];
            maxindex = i;
        }
    }
    int remain = 0;
    for(int i = 0; i < 3; i++)
    {
        if(i != maxindex)
        {
            remain += *(arr + i);
        }
    }
    if(remain == max * 2) //정삼각형인 경우
    {
        printf("%d", max * 3);
    }
    else //정삼각형이 아닌 경우
    {
        printf("%d", 2 * remain - 1);
    }
}