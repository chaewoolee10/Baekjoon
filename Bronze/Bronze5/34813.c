//34813
#include <stdio.h>

int main()
{
    char str[10] = {}; scanf("%s", str);
    
    switch (str[0])
    {
    case 'F':
        printf("Foundation");
        break;
    case 'C':
        printf("Claves");       
        break;
    case 'V':
        printf("Veritas");
        break;
    case 'E':
        printf("Exploration");
        break;
    
    }
}