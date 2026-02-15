//2914
/*
10 10
10 -> 9.000001 ~ 9.9999
91~104
38 24
24 -> 23.0000..~23.9999
38 * 23 = 874
23.0001 고려 -> 874+1

*/
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int l; scanf("%d", &l);
    
    int res = a * (l - 1) + 1;
    printf("%d", res);
}