//32025
#include <stdio.h>

int main()
{
    int h; scanf("%d", &h);
    int w; scanf("%d", &w);
    h *= 100;
    w *= 100;
    h < w ? printf("%d", h / 2) : printf("%d", w / 2);
}