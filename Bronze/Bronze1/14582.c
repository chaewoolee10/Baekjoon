// 14582
#include <stdio.h>

int main()
{
    int woolim[9] = {};
    int sum_woolim = 0;
    int startlink[9] = {};
    int sum_startlink = 0;

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &woolim[i]);
    }
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &startlink[i]);
    }
    int checker = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < woolim[i]; j++)
        {
            sum_woolim++;
            if(sum_woolim > sum_startlink)
            {
                checker = 1;
            }
            
        }
        sum_startlink += startlink[i];
    }
    checker == 1 ? printf("Yes") : printf("No");
}