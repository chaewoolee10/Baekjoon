//1003
/*
1 2 3 4 5 6 7
0 1 1 2 3 5 8
fib(2) = fib(1) + fib(0)
fib(3) = fib(2) + fib(1) = (fib(1) + fib(0)) + fib(1)
        = 2fib(1) + fib(0) 
fib(4) = fib(3) + fib(2) = (2fib(1) + fib(0)) + fib(1) + fib(0)
        = 3fib(1) + 2fib(0)
fib(5) = fib(4) + fib(3) = (3fib(1) + 2fib(0)) + 2fib(1) + fib(0)
        = 5fib(1) + 3fib(0)
fib(6) = 8fib(1) + 5fib(0) (fib(n + 1), fib(n))
*/
#include <stdio.h>

int main()
{
    int t; scanf("%d", &t);
    long long int arr[45] = {};
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i < 41; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for(int i = 0; i < t; i++)
    {
        int n; scanf("%d", &n);
        if(n == 0) printf("1 0\n");
        else printf("%lld %lld\n", arr[n - 1], arr[n]);
    }
    
}