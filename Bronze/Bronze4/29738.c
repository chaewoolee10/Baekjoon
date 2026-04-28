//29738
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        printf("Case #%d: ", i + 1);
        if(a > 4500) printf("Round 1");
        else if(a > 1000) printf("Round 2");
        else if(a > 25) printf("Round 3");
        else printf("World Finals");
        printf("\n");
    }
}