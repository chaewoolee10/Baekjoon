// 29736
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    int k; scanf("%d", &k);
    int x; scanf("%d", &x);

    int kmin = k - x;
    int kmax = k + x;

    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (i >= kmin && i <= kmax)
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("IMPOSSIBLE");
    }
    else
    {
        printf("%d", count);
    }
    
}