//1668
#include <stdio.h>

int left(int *arr, int n);
int right(int *arr, int n);

int main()
{
    int n; scanf("%d", &n);
    int arr[50] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", left(arr, n));
    printf("%d\n", right(arr, n));
}
int left(int *arr, int n)
{
    int count = 1;
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(max < arr[i])
        {
            count++;
            max = arr[i];
        }
    }
    return count;
}
int right(int *arr, int n)
{
    int count = 1;
    int max = arr[n - 1];
    for(int i = n - 2; i >= 0; i--)
    {
        if(max < arr[i])
        {
            max = arr[i];
            count++;
        }
    }
    return count;
}
