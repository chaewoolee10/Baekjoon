//17009
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    for(int i = 3; i > 0; i--)
    {
        int c; scanf("%d", &c);
        a += c * i;
    }
    for(int i = 3; i > 0; i--)
    {
        int c; scanf("%d", &c);
        b += c * i;
    }
    if(a != b)
    {
        a > b ? printf("A") : printf("B");
    }
    else
    {
        printf("T");
    }
}