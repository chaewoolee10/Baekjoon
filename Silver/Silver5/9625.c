//9625
/*
A -> B
B -> BA

A -> B -> BA -> BAB -> BABBA -> BABBABAB -> BABBABABBABBA
  A B
1 0 1
2 1 1
3 1 2
4 2 3
5 3 5
6 5 8
7 8 12
*/
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    long long int fib[50] = {};
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 45; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("%lld %lld", fib[n - 1], fib[n]);
}