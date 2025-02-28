//11945
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    char arr[10][10] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }   
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%c", arr[i][m - j - 1]);
        }
        printf("\n");
    }
    
}