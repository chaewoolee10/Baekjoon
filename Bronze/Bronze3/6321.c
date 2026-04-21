//6321
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        char str[55] = {}; scanf("%s", str);
        int len = strlen(str);
        for(int i = 0; i < len; i++)
        {
            if(str[i] == 'Z')
            {
                str[i] = 'A';
            }
            else
            {
                str[i]++;
            }
        }
        printf("String #%d\n", i + 1);
        printf("%s\n\n", str);
    }
}