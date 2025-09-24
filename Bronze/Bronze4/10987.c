//10987
#include <stdio.h>
#include <string.h>

int main()
{
    char str[103] = {}; scanf("%s", str);
    int length = strlen(str);
    
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            sum++;
        }
    }
    printf("%d", sum);
}
