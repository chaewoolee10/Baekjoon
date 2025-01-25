// 11719
#include <stdio.h>
#include <string.h>

int main()
{
    
    for (int i = 0; i < 100; i++)
    {
        char str[105] = {};
        fgets(str, sizeof(str), stdin);
        printf("%s", str);
    }
}