//2167
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    int arr[300][300] = {};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int test; scanf("%d", &test);
    for(int testcase = 0; testcase < test; testcase++)
    {
        int i; scanf("%d", &i);
        int j; scanf("%d", &j);
        int x; scanf("%d", &x);
        int y; scanf("%d", &y);
        
        long long int sum = 0;
        for(int col = i - 1; col < x; col++)
        {
            for(int row = j - 1; row < y; row++)
            {
                sum += arr[col][row];
            }   
        }
        printf("%lld\n", sum);    
    }
    
}