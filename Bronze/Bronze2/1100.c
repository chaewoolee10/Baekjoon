//1100
#include <stdio.h>

int main()
{
    char str[9][9] = {};
    
    for(int i = 0; i < 8; i++)
    {
        scanf("%s", str[i]);
    }
    int count = 0;
    
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(i % 2 == 0) //0,2,4,6 행 흰 검 흰 검 흰 검 흰 검
            {
                if(j % 2 == 0)
                {
                    if(str[i][j] == 'F')
                    {
                        count++;
                    }
                }
            }
            else //1,3,5,7 행 검 흰 검 흰 검 흰 검 흰
            {
                if(j % 2 == 1)
                {
                    if(str[i][j] == 'F')
                    {
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n", count);
    
}