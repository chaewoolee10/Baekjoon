//2445
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = n - 1; i > 0; i--)
    {
        for(int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        
        for(int j = 2 * i; j > 0; j--)
        {
            printf(" ");
        }
        
        for(int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i = 0; i < 2 * n; i++)
    {
        printf("*");
    }
    printf("\n");
    
    
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        
        for(int j = 2 * i; j > 0; j--)
        {
            printf(" ");
        }
        
        for(int j = 0; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}