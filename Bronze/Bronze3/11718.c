//11718
//scanf("%[^\n]s",str); \n이 나오기 전까지 계속 입력받음

#include <stdio.h>

int main()
{
    for(int i = 0; i < 100; i++)
    {
        char str[105] = ""; 
        scanf("%[^\n]s", str);
        getchar();
        printf("%s\n", str);
    }
}
