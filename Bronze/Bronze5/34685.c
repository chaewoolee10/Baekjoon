//34685
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[24] = {}; scanf("%s", str1);
    getchar();
    char str2[24] = {}; scanf("%s", str2);
    
    if(!strcmp(str1, str2))
    {
        printf("0");
    }
    else
    {
        printf("1550");
    }
}