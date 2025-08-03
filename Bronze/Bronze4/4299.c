//4299
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    int check = 0;
    int x = 0;
    int y = 0;
    
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= 1000; j++)
        {
            if(i + j == a && (i - j == b || j - i == b))
            {
                x = i;
                y = j;
                check = 1;
                break;
            }
        }
    }
    if(check == 1)
    {
        x > y ? printf("%d %d", x, y) : printf("%d %d", y, x);
    }
    else
    {
        printf("-1");
    }
}