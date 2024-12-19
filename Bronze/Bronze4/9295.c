//9295
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);

        printf("Case %d: %d\n", i+1, a+b);
    }
}