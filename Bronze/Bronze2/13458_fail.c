// 13458
#include <stdio.h>

int cal(int ai, int c);

int main()
{
    int n;
    scanf("%d", &n); // 시험장 개수
    long long int req = 0;     // 필요한 감독관 수

    int ai[1000000] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ai[i]);
    }
    int b;
    scanf("%d", &b); // 총감독관이 감시할 수 있는 응시자
    int c;
    scanf("%d", &c); // 부감독관이 감시할 수 있는 응시자

    req += n; // 시험장 한 개당 감독관이 무조건 한 명 들어가야함
    for (int i = 0; i < n; i++)
    {
        ai[i] -= b; // 총감독관이 감시할 수 있는 응시자 수만큼 뺌
        if (ai[i] > 0)
        {
            req += cal(ai[i], c);
        }
    }
    printf("%lld", req);
}

int cal(int ai, int c)
{
    int req = 0;
    // 감시해야 하는 응시자 숫자가 0보다 작아질 때까지 c를 뺌
    req += ai / c;
    req += ai % c == 0 ? 0 : 1;
    /*
    while (1) 
    {
        if (ai <= 0)
        {
            break;
        }
        ai -= c;
        req++;
    }
    */
    return req;
}
