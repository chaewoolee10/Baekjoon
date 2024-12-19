//29790
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int u; scanf("%d", &u);
    int l; scanf("%d", &l);
    
    if(n >= 1000)
    {
        if(u >= 8000 || l >= 260)
        {
            printf("Very Good\n");
        }
        else
        {
            printf("Good\n");    
        }
    }    
    else
    {
        printf("Bad\n");
    }
    
}