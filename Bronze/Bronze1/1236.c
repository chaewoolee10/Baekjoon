//1236
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    char arr[50][51] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
    
    int rowcount = 0;
    
    for(int i = 0; i < n; i++)
    {
        int check = 0;
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == 'X')
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            rowcount++;
        }
    }
    
    int colcount = 0;
    
    for(int i = 0; i < m; i++)
    {
        int check = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[j][i] == 'X')
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            colcount++;
        }
    }
    
    rowcount >= colcount ? printf("%d", rowcount) : printf("%d", colcount);
    
}
