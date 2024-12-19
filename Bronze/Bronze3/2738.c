//2738
#include <stdio.h>

int main()
{
    int arr[101][101] = {0};
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int a;
            scanf("%d", &a);
            arr[i][j] += a;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    
}