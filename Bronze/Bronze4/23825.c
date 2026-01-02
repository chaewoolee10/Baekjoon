//23825
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    n = n / 2;
    m = m / 2;
    
    n > m ? printf("%d", m) : printf("%d", n);
}