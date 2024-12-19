//10988
#include <stdio.h>
#include <string.h>

int main()
{
    char str[110]; scanf("%s", str);
    int length = strlen(str);
    
    for(int i = 0; i < length/2; i++)
    {
        if(str[i] != str[length-i-1])
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    
}