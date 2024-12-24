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
    
    if(a == b)
    {
        if(n == w || a * n != w)
        {
            printf("-1");
        }
        else
        {
            printf("%d %d", n / 2, n / 2);
        } 
    }
    else
    {
        if(a > b)
        {
            goat = (w - a * n) / (a - b);
            sheep = n - goat;
        }
        else
        {
            goat = (w - a * n) / (b - a);
            sheep = n - goat;
        }
        
        if(goat >= n || sheep >= n)
        {
            printf("-1");
        }
        else
        {
            printf("%d %d", sheep, goat);
        }
        
    }
    
}