//10156
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    int m; scanf("%d", &m);
    
    int req = n * k - m;
    
    req <= 0 ? printf("0") : printf("%d", req);
}