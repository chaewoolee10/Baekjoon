//2740
/*
new_arr[i][j] = arr1[i][0] * arr2[0][j] + arr1[i][1] * arr2[1][j] ...


*/
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int arr1[100][100] = {};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    scanf("%d", &m);
    int k; scanf("%d", &k);
    int arr2[100][100] = {};
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < k; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            int elem = 0;
            for(int t = 0; t < m; t++)
            {
                elem += arr1[i][t] * arr2[t][j];
            }
            printf("%d ", elem);
        }
        printf("\n");
    }
}