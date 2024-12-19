//11586
#include <stdio.h>

int main()
{
    char str[100][100] = {};
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    int k; scanf("%d", &k);
    if(k == 1)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%c", str[i][j]);
            }
            printf("\n");
        }
    }
    else if(k == 2)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = n-1; j >= 0; j--)
            {
                printf("%c", str[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        for(int j = n-1; j >= 0; j--)
        {
            for(int i = 0; i < n; i++)
            {
                printf("%c", str[j][i]);
            }
            printf("\n");
        }
    }
}