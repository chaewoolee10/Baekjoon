//5988
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char str[65] = {}; scanf("%s", str);
        
        int a = str[strlen(str) - 1] - '0';
        if(a % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }
}