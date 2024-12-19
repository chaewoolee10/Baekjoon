//1978
//소수의 조건 : n을 2~n까지 나눈 횟수가 한번이면 됨(자기자신으로만 나누었다는 뜻)
#include <stdio.h>

int main()
{
    int testcase; scanf("%d", &testcase);

    int primecount = 0;
    for(int i = 0; i < testcase; i++)
    {
        int n; scanf("%d",&n);
        int divcount = 0;
        for(int i = 2; i <= n; i++)
        {
            if(n%i == 0)
            {
                divcount++;
            }
        }
        if(divcount == 1)
        {
            primecount++;
        }
    }
    printf("%d", primecount);
}
