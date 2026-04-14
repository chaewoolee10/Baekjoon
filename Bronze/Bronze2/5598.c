//5598
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1005] = {}; scanf("%s", str);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        str[i] -= 3;
        if(str[i] < 'A')
        {
            str[i] -= 'A';
            str[i] += 'Z' + 1;
        }
    }
    printf("%s", str);
    
}