// 28691
#include <stdio.h>

void stringcheck(char c);

int main()
{
    char c;
    scanf("%c", &c);
    stringcheck(c);
}

void stringcheck(char c)
{
    switch (c)
    {
    case 'M':
        printf("MatKor");
        break;
    case 'W':
        printf("WiCys");
        break;
    case 'C':
        printf("CyKor");
        break;
    case 'A':
        printf("AlKor");
        break;
    default:
        printf("$clear");
    }
}