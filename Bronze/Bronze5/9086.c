//9086
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        char str[1000]; scanf("%s", str);
        char first = str[0];
        char end = str[strlen(str)-1];
        printf("%c%c\n", first, end);
    }

}