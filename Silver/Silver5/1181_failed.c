//1181
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    char str[20000][53] = {};
    char tmp[53] = {};
    int length[20000] = {};
    int lengthtmp = 0;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]); //문자열 입력받기
        for(int j = 0; j < i; j++)
        {
            if(!strcmp(str[i], str[j]))
            {
                str[i][0] = '\0';
            }
        }
        if(str[i][0] != '\0')
        {
            length[i] = strlen(str[i]);
        }
        
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(strcmp(str[i], str[j]) < 0 && str[i][0] != '\0')
            {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
                lengthtmp = length[i];
                length[i] = length[j];
                length[j] = lengthtmp;
            }
            
        }
    }
    
    for(int i = 1; i <= 50; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(length[j] == i)
            {
                printf("%s\n", str[j]);
            }
        }
    }
    
}