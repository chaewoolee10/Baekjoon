//1550
#include <stdio.h>
#include <string.h>


int cal(char c)
{
    return c >= 'A' ? c - 'A' + 10 : c - '0';
}

int main()
{
    char hexa[10] = {}; //16진수
    int deci = 0; //10진수
    
    scanf("%s", hexa);
    int length = strlen(hexa);
    int a = 1;
    
    for(int i = length - 1; i >= 0; i--)
    {
        deci += cal(hexa[i]) * a;
        a *= 16;
    }
    printf("%d", deci);
    
}
