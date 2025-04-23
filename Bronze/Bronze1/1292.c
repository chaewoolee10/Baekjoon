//1292
#include <stdio.h>

void genarr(int *arr);

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int sum = 0;

    int arr[1000] = {};
    genarr(arr);
    
    for(int i = n - 1; i < m; i++)
    {
        sum += arr[i];
    }    
    printf("%d", sum);
}

void genarr(int *arr)
{
    int a = 1;
    int count = 0;
    for(int i = 0; i < 1000; i++)
    {
        arr[i] = a;
        count++;
        if(count == a)
        {
            count = 0;
            a++;
        }
    }
}