//25756
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    double V = 0;
    double po[40000] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &po[i]);
    }
    for(int i = 0; i < n; i++)
    {
        V = 1.0 - (1.0 - V) * (1.0 - po[i] / 100);
        printf("%lf\n", V * 100);
    }
}