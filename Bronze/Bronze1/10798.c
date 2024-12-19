//10798
#include <stdio.h>

int main()
{
    char str[5][15] = {}; //배열은 무조건 초기화 해주어야함
    for(int i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }
    /*
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= 15; j++)
        {
            printf("%c", str[i][j]);
        }
        printf("\n");
    }
    */
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(str[j][i] != '\0') // 문자열에 문자가 없으면 '\0' 
            {
                printf("%c", str[j][i]);
            }
        }
    }
    
}