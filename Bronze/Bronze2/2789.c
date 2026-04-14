//2789
//CAMBRIDGE
#include <stdio.h>
#include <string.h>

int main()
{
    char str[103] = {}; scanf("%s", str);
    int len = strlen(str);
    
    for(int i = 0; i < len; i++)
    {
        switch (str[i])
        {
        case 'C':
        case 'A':
        case 'M':
        case 'B':
        case 'R':
        case 'I':
        case 'D':
        case 'G':
        case 'E':
            break;
        default:
        printf("%c", str[i]);    
            break;
        }
    }
}