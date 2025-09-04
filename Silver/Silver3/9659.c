//9659
#include <stdio.h>
typedef unsigned long long int ulld;

void winner(int turn);
int main()
{
    ulld n; scanf("%llu", &n);
    ulld count = n / 3; //3개씩 가져간 횟수
    ulld remain = n % 3; //3개씩 가져가고 남은 돌
    int turn = 0; //0 SK 1 CY
    
    turn = count % 2 == 0 ? 0 : 1; //짝수면 상근, 홀수면 창영 차례
    
    //본인 차례에 아무것도 없으면 짐
    if(remain == 0) 
    {
        winner(!turn);
    }
    else
    {
        while(1)
        {
            if(!remain)
            {
                winner(!turn);
                break;
            }
            remain--;
            turn = !turn;
        }
    }
}
void winner(int turn)
{
    turn == 0 ? printf("SK") : printf("CY");
}