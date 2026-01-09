//17350
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    int check = 0;
    getchar();
    for(int i = 0; i < n; i++)
    {
        char str[103] = {}; scanf("%s", str);
        if(!strcmp(str, "anj"))
        {
            check = 1;
        }
    }
    check == 1 ? printf("뭐야;") : printf("뭐야?");
}