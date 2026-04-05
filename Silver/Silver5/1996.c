//1996
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    char str[1000][1005] = {};
    int arr[1000][1005] = {};

    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(str[i][j] != '.') arr[i][j] = '*';
            for(int k = i - 1; k <= i+1; k++)
            {
                for(int l = j - 1; l <= j+1; l++)
                {
                    if(k < 0 || k >= n || l < 0 || l >= n) continue;
                    else
                    {
                        if(str[k][l] != '.') arr[i][j] += str[k][l] - '0';
                    
                        
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(str[i][j] != '.') printf("*");
            else
            {
                if(arr[i][j] >= 10) printf("M");
                else printf("%d", arr[i][j]);
            }
            
        }
        printf("\n");
    }
}