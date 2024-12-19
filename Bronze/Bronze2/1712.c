//1712
#include <stdio.h>

int main()
{
    int A; scanf("%d", &A);
    int B; scanf("%d", &B);
    int C; scanf("%d", &C);

    int profit = C - B;
    
    profit <= 0 ? printf("-1") : printf("%d", A / profit +1);

}