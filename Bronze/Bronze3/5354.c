//5354
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        
        for(int k = 0; k < a; k++)
        {
            for(int l = 0; l < a; l++)
            {
                if(k == 0 || k == a - 1)
                {
                    printf("#");
                }
                else
                {
                    if(l == 0 || l == a - 1)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf("J");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}