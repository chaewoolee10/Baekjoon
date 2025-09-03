//9656
/*
4 SK 3
1 CY 1
0 SK 
-> SK win

5 SK 3
2 CY 1
1 SK 1
0 CY
-> CY win

6 SK 3
3 CY 3
0 SK
-> SK win

10 SK 3
7 CY 3
4 SK 3
1 CY 1
0 SK
-> SK win
*/

#include <stdio.h>

void winner_print(int seq);

int main()
{
    int n; scanf("%d", &n);
    int count = n / 3;
    int turn = n % 3; //서로 3씩 뺀 후 나머지
    int seq = 0; //상근 0, 창영 1
    seq = count % 2 == 0 ? 0 : 1;
    
    if(turn == 0)
    {
        winner_print(seq);
    }
    else
    {
        while(1)
        {
            if(!turn)
            {
                //자기 차례에 아무것도 남지 않으면 승리
                winner_print(seq); 
                break;
            }
            turn -= 1;
            seq = !seq;
        }
    }
}
void winner_print(int seq)
{
    seq == 0 ? printf("SK") : printf("CY");
}