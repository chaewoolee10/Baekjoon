//15439
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    if(n == 2)
    {
        printf("2");
    }
    else
    printf("%d", n * (n - 1));
}