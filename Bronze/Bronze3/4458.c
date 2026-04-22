//4458
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        char str[35] = {}; scanf("%[^\n]s", str);
        getchar();
        if(str[0] <= 'z' && str[0] >= 'a')
        {
            str[0] -= 'a';
            str[0] += 'A';
        }
        printf("%s\n", str);
    }
}