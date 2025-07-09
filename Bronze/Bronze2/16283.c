//16283
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    int n; scanf("%d", &n);
    int w; scanf("%d", &w);
    
    int sheep = 0;
    int goat = 0;
    int check = 0;
    
    int sheep_final = 0;
    int goat_final = 0;
    
    for(int i = 1; i < n; i++)
    {
        sheep = n - i;
        goat = i;
        //printf("%d %d\n", a * sheep + b * goat, check);
        if(w == a * sheep + b * goat)
        {
            if(check == 0)
            {
                check = 1;
                sheep_final = sheep;
                goat_final = goat;
            }
            else
            {
               check = 2; 
            }
        }
    }
    if(check == 1)
    {
        printf("%d %d",sheep_final, goat_final);
    }
    else
    {
        printf("-1");
    }
}