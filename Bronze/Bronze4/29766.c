//29766
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1003] = {}; scanf("%s", str);
    int length = strlen(str);
    int count = 0;
    for(int i = 0; i < length - 3; i++)
    {
        if(str[i] == 'D' && str[i + 1] == 'K' && str[i + 2] == 'S' && str[i + 3] == 'H')
        {
            count++;
        }
    }
    printf("%d", count);
    
}