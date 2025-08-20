//14916
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int count = 0;
    int min = 50000;
    int check = 0;
    int i = 0;
    while(1)
    {
        int a = n;
        a -= 5 * i;
        if(a < 0)
        {
            break;
        }
        count += i;
        count += a / 2;
        a %= 2;
        if(a == 0)
        {
            if(min > count)
            {
                min = count;
                check = 1;
            }
        }
        i++;
        count = 0;
    }
    if(!check)
    {
        printf("-1");
    }
    else
    {
        printf("%d", min);
    }
}