//9655
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int turn = 0; //sk first
    if((n / 3) % 2 == 1)
    {
        turn = !turn;
    }
    n -= (n / 3) * 3;
    if(n == 2 || n == 0)
    {
        turn = !turn;
    }
    
    turn == 1 ? printf("CY") : printf("SK");
    /*
    while(1)
    {
        if(n <= 3)
        {
            break;
        }
        n -= 3;
        turn = !turn;
    }
    if(n == 2)
    {
        n -= 1;
        turn = !turn;
    }
    //n이 1또는 3이면 지금 턴인 사람이 이김
    
    turn == 1 ? printf("CY") : printf("SK");*/
}