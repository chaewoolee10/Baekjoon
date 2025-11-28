//4562
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);
        
        if(a < b)
        {
            printf("NO BRAINS\n");
        }
        else
        {
            printf("MMM BRAINS\n");
        }
    }
}