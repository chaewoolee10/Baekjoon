//5543
#include <stdio.h>

int main()
{
    int ham, minham = 2001;
    int bev, minbev = 2001;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &ham);
        if(ham < minham)
        {
            minham = ham;
        }
    }
    for(int i = 0; i < 2; i++)
    {
        scanf("%d", &bev);
        if(bev < minbev)
        {
            minbev = bev;
        }
    }
    
    printf("%d", minbev + minham - 50);
    

}