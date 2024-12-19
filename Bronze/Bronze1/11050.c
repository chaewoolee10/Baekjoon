//11050
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);

    int a = 1;
    int b = 1;
    for(int i = 1; i <= k; i++)
    {
        b *= i;
    }
    printf("%d\n",b);
    for(int i = 1; i <= k; i++)
    {
        a *= n;
        n--;
    }
    printf("%d\n",a);
    printf("%d", a/b);
}