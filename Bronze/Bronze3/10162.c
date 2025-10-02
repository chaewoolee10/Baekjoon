//10162
#include <stdio.h>

int main()
{
    int t; scanf("%d", &t);
    int a = t / 300;
    t %= 300;
    int b = t / 60;
    t %= 60;
    int c = t / 10;
    t %= 10;
    if(t != 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d %d", a, b, c);   
    }
}