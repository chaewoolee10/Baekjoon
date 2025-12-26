//34236
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[105] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[n - 1] + (arr[1] - arr[0]));
}