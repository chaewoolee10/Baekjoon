//2720
#include <stdio.h>

int main()
{
     int n; scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int changecount[4] = {0, 0, 0, 0};
        int change; scanf("%d", &change);

        while(change != 0)
        {
            if(change >= 25)
            {
                changecount[0] = change / 25;
                change %= 25;
            }
            else if(change >= 10)
            {
                changecount[1] = change / 10;
                change %= 10;
            }
            else if(change >= 5)
            {
                changecount[2] = change / 5;
                change %= 5;
            }
            else
            {
                changecount[3] = change;
                change = 0;
            }

        }
        printf("%d %d %d %d", changecount[0], changecount[1],changecount[2],changecount[3]);
        printf("\n");
    }
}