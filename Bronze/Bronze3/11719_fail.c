// 11719
#include <stdio.h>
#include <string.h>

int main()
{
    char str[105] = {};
    for (int i = 0; i < 100; i++)
    {
        scanf("%[^\n]s", str);
        getchar();
        int length = strlen(str);
        for(int i = 0; i < length; i++)
        {
            printf("%c", str[i]);
        }
        printf("\n");
    }
}