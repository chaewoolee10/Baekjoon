//6438
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        char str[100] = {}; scanf("%[^\n]s", str);
        getchar();
        int length = strlen(str);
        for(int j = length; j >= 0; j--)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}
