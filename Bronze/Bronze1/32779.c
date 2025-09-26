//32779
// 1kwh 당 105.6원
//1 kw 1시간 당 105.6원
//1 kw 1분 당 105.6 / 60 = 1.76 원
// 전력 계산 a W m 분 = a / 1000 kW * m 분 * 176원 / 100
// a * m * 176 / 100000
#include <stdio.h>

int main()
{
    int q; scanf("%d", &q);
    
    
    for(int i = 0; i < q; i++)
    {
        long long int a; scanf("%lld", &a);
        long long int m; scanf("%lld", &m);
        long long int res = a * m * 176;
        printf("%lld\n", res / 100000);
    }
}