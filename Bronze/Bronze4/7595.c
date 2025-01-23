//7595
#include <stdio.h>

int main()
{
    while(1)
    {
        int n; scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}