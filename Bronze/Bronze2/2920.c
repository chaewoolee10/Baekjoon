//2920
#include <stdio.h>

int main()
{
    int str[8] = {1,2,3,4,5,6,7,8};
    int sc[8];

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &sc[i]);
    }

    int ascount = 0;
    int descount = 0;
    for(int i = 0; i < 8; i++)
    {
        if(str[i] == sc[i])
        {
            ascount++;
        }
        if(str[7-i] == sc[i])
        {
            descount++;
        }
    }

    if(ascount == 8)
    {
        printf("ascending");
    }
    else if(descount == 8)
    {
        printf("descening");
    }
    else
    {
        printf("mixed");
    }

}