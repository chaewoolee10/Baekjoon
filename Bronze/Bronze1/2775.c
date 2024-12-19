//2775
#include <stdio.h>

int main()
{
    
    int t; scanf("%d", &t);
    
    int apt[20][20];
    for(int i = 0; i <= 14; i++)
    {
        for(int j = 0; j < 14; j++)
        {
            apt[i][j] = 0;
        }
    
    }

    for(int i = 0; i < 14; i++)
    {
        apt[0][i] = i+1;
    }

    for(int i = 1; i <= 14; i++)
    {
        for(int j = 0; j < 14; j++)
        {
            for(int k = 0; k <= j; k++)
            {
                apt[i][j] += apt[i-1][k];
            }
        }
    }
    for(int i = 0; i <= 14; i++)
    {
        for(int j = 0; j < 14; j++)
        {
            printf("%d ", apt[i][j]);
        }
        printf("\n");
    
    }
    for(int i = 0; i < t; i++)
    {
        int k; scanf("%d", &k);
        int n; scanf("%d", &n);
        
        printf("%d\n", apt[k][n-1]);
    }


}