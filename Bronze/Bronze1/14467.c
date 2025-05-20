//14467
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    int cowarr[10] = {};
    for(int i = 0; i < 10; i++)
    {
        cowarr[i] = -1;
    }

    for(int i = 0; i < n; i++)
    {
        int cownum; scanf("%d", &cownum);
        int move; scanf("%d", &move);
        if(cowarr[cownum - 1] == -1)
        {
            cowarr[cownum - 1] = move;
        }
        else if(cowarr[cownum - 1] != move)
        {
            cowarr[cownum - 1] = move;
            count++;
        }
    }
    printf("%d", count);
}