//18408
#include <stdio.h>

int main()
{
    int onecount = 0;
    for (int i = 0; i < 3; i++)
    {
        int a; scanf("%d", &a);
        onecount += a == 1 ? 1 : 0;
    }
    onecount >= 2 ? printf("1") : printf("2");
}