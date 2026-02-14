//14912
/*
1~9 1번 x 9
10~99 2번 x 90
100~999 3번 x 900 = 0.27만
1000~9999 4번 x 9000 = 3.6만
10000~99999 5번 x 90000 = 45만
100000 6번 x 1
<= 1억

*/
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int digit; scanf("%d", &digit);
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        int i_dup = i;
        
        while(1)
        {
            if(i_dup == 0)
            {
                break;
            }
            int a = i_dup % 10;
            i_dup /= 10;
            if(digit == a) count++;
        }
    }
    printf("%d", count);
}