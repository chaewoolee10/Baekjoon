//11948
#include <stdio.h>

int main()
{
    int science_sum = 0;
    int science_min = 100;
    int histandgeo_max = 0;
    for(int i = 0; i < 6; i++)
    {
        if(i < 4)
        {
            int a = 0; scanf("%d", &a);
            if(a < science_min)
            {
                science_min = a;
            }
            science_sum += a;
        }
        else
        {
            int a = 0;
            scanf("%d", &a);
            if(a > histandgeo_max)
            {
                histandgeo_max = a;
            }
        }
    }
    int sum = science_sum + histandgeo_max - science_min;
    printf("%d", sum);
}