//1152
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000000]; scanf("%[^\n]s",str); //[^"문자"] "문자"가 나오기 전까지 계속 입력받겠다
    int wordcnt = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            wordcnt++;
        }
           
    }
    if(str[0] == ' ')
    {
        wordcnt -= 1;
    }
    if(str[strlen(str)-1] == ' ')
    {
        wordcnt -= 1;
    }
    
    printf("%d", wordcnt+1);
}