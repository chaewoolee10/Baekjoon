//10810
#include <stdio.h>

int main()
{
    int arr[105] = {0};

    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    getchar();

    for(int count = 0; count < m; count++)
    {
        int i; scanf("%d", &i);
        int j; scanf("%d", &j);
        int k; scanf("%d", &k);
        getchar();
        for(int l = i-1; l < j; l++)
        {
            arr[l] = k;
        }
    }
    for(int cnt = 0; cnt < n; cnt++)
    {
        printf("%d ", arr[cnt]);
    }
    
}