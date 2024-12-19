//20492
#include <stdio.h>

int tax(int a);

int main()
{
    int n; scanf("%d", &n);
    int req = n * 1 / 5;
    printf("%d %d", n - tax(n), n - tax(req));
}
int tax(int a)
{
    return a * 11 / 50;
}