// 2530
#include <stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    int m;
    scanf("%d", &m);
    int s;
    scanf("%d", &s);

    int t;
    scanf("%d", &t);

    s += t;
    m += s / 60;
    s %= 60;
    
    h += m / 60;
    m %= 60;
    
    h %= 24;
    
    printf("%d %d %d\n", h, m, s);
}