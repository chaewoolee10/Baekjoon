//34849
#include <stdio.h>

int main()
{
    long long int n; scanf("%lld", &n);
    n = n * n;
    n > 100000000 ? printf("Time limit exceeded") : printf("Accepted");
}