// 23235
#include <stdio.h>

int main()
{
    int i = 1;
    while (1)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            scanf("%d", &a);
        }
        printf("Case %d: Sorting... done!\n", i);
        i++;
    }
}