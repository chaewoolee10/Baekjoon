
//1009
// 1 => 1 1 1 1
// 2 => 2 4 6 8
// 3 => 3 9 7 1 
// 4 => 4 6 4 6
// 5 => 5 5 5 5
// 6 => 6 6 6 6
// 7 => 7 9 3 1
// 8 => 8 4 2 6
// 9 => 9 1 9 1
// 10 => 0 0 0 0

#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int sqr_cycle[4];
    int sqr = 0;

    int a, b;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        sqr = a;
        b %= 4; // 마지막 주기
        
        for(int j = 0; j < 4; j++) // 제곱의 일의 자릿수 주기계산
        {
            sqr_cycle[j] = sqr % 10;
            sqr *= a;   
        }

        if(sqr_cycle[b] == 0)
        {
            printf("10\n");
        }
        else
        {
            if(b == 0)
            {
                printf("%d\n", sqr_cycle[3]);
            }
            else
            {
                printf("%d\n", sqr_cycle[b-1]);
            }
        }
        
        
        
    }

}