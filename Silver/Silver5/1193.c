// 1193
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;

    while (1)
    {
        if (n <= k)
        {
            break;
        }
        n -= k;
        k++;
    }
    
    if(k % 2 != 0)
    {
        printf("%d/%d", k - n + 1, n);
    }
    else
    {
        printf("%d/%d", n, k - n + 1);
    }
}