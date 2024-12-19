//10813
#include <stdio.h>

int main()
{
    int arr[105] = {0};

    for(int i = 0; i < 100; i++)
    {
        arr[i] = i+1;
    }
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);

    for(int k = 0; k < m; k++)
    {
        int i; scanf("%d", &i);
        int j; scanf("%d", &j);
        
        int a = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = a;

    }
    for(int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}