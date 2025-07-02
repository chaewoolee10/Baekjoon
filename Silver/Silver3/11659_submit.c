//11659
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int arr[100005] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int prefix[100005] = {};
    prefix[0] = 0;
    prefix[1] = arr[0];
    
    for(int i = 2; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    for(int k = 0; k < m; k++)
    {
        int i = 0; scanf("%d", &i);
        int j = 0; scanf("%d", &j);
        
        printf("%d\n", prefix[j] - prefix[i - 1]);
    }
}
