//2846
#include <stdio.h>

int maxascent(int n, int *arr);

int main()
{
    int n; scanf("%d", &n);
    
    int arr[1000] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("%d", maxascent(n, arr));
}

int maxascent(int n, int *arr)
{
    int max = 0;
    int ascentarr[1000] = {};
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] < arr[i + 1])
        {
            max += arr[i + 1] - arr[i];
        }
        if(arr[i] >= arr[i + 1])
        {
            ascentarr[i] = max;
            max = 0;
        }
        if(i == n - 2)
        {
            ascentarr[i] = max;
        }
    }
    int newmax = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(newmax < ascentarr[i])
        {
            newmax = ascentarr[i];
        }
    }
    return newmax;
}