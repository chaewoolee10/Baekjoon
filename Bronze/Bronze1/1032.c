//1032
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    char str[55][55] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    
    int length = strlen(str[0]);
    if(n == 1)
    {
        printf("%s",str[0]);
    }
    else
    {
        int duparr[55] = {};
        
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < length; j++)
            {
                if(str[0][j] != str[i][j])
                {
                    duparr[j] = 1;
                }
            }
        }
        
        for(int i = 0; i < length; i++)
        {
            
            if(duparr[i] == 1)
            {
                printf("?");
            }
            else
            {
                printf("%c", str[0][i]);
            }
        }
    }
}