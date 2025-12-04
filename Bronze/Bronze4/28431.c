//28431
#include <stdio.h>

int main()
{
    int arr[10] = {};
    for(int i = 0; i < 5; i++)
    {
        int a; scanf("%d", &a);
        arr[a]++;
        arr[a] %= 2;
    }
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == 1)
        {
            printf("%d", i);
            break;
        }
    }
}