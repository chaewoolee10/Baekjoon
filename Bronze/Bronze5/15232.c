//15232
#include <stdio.h>

int main()
{
    int r; scanf("%d", &r); //높이
    int c; scanf("%d", &c); //길이
    
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}