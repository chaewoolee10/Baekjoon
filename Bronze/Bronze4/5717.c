//5717
#include <stdio.h>

int main()
{
    int m = 0;
    int f = 0;
    while(1)
    {
        scanf("%d %d",&m, &f);
        if(m + f == 0)
        {
            break;
        }
        printf("%d\n", m + f);
        
    }
    
}