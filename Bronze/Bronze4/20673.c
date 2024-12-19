//20673
#include <stdio.h>

int main()
{
    int p; scanf("%d", &p);
    int q; scanf("%d", &q);
    
    if(p <= 50 && q <= 10)
    {
        printf("White");
    }
    else
    {
        if(q > 30)
        {
            printf("Red");
        }
        else
        {
            printf("Yellow");
        }
    }
    
}