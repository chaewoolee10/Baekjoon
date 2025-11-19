//21612
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int p = 5 * n - 400;
    printf("%d\n", p);
    p -= 100;
    if(p == 0)
    {
        printf("0");
    }
    else
    {
        p < 0 ? printf("1") : printf("-1");
    }
}