//2592
#include <stdio.h>

int main()
{
    int arr[100] = {};
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        int a; scanf("%d", &a);
        sum += a;
        arr[a / 10]++;
    }
    int maxcount = 0;
    int max = 0;
    for(int i = 0; i < 100; i++)
    {
        if(arr[i] > maxcount)
        {
            maxcount = arr[i];
            max = i * 10;
        }
    }
    printf("%d\n", sum / 10);
    printf("%d", max);
}