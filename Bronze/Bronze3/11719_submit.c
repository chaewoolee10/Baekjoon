// 11719
#include <stdio.h>
#include <string.h>

int main()
{
    char str[105] = {};
    for (int i = 0; i < 100; i++)
    {
        fgets(str, sizeof(str), stdin);
        printf("%s", str);
    }
}