//26532
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    //한 포대 5 에이커 = 5 * 1에이커 = 5 * 4840제곱야드
    long long int s = n * m;
    int count = s / (5 * 4840) + 1;
    printf("%d", count);
    
    
}