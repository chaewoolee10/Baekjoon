//24265
/*
n = 7
i 1 ~ 6
j 2 ~ 7 -> 6
j 3 ~ 7 -> 5
4
3
2
1

*/
#include <stdio.h>

int main()
{
    long long int n; scanf("%lld", &n);
    
    printf("%lld\n", (n - 1) * n / 2);
    printf("2");
}