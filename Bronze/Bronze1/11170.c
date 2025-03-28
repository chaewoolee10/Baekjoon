//11170
#include <stdio.h>

int checker(int n);

int main()
{
    int t = 0; scanf("%d", &t);
    
    for(int test = 0; test < t; test++)
    {
        int n = 0; scanf("%d", &n);
        int m = 0; scanf("%d", &m);
        int count = 0;
        
        if(n == 0 || m == 0)
        {
            count++;
        }
        
        for(int i = n; i <= m; i++)
        {
            //printf("%d %d\n", i, checker(i));
            count += checker(i);
        }
        
        printf("%d\n", count);
    }  
}

int checker(int n)
{
    int count = 0;
    
    while(1)
    {
        if(n / 10 == 0)
        {
            return count;
        }
        if(n % 10 == 0)
        {  
            count++;
        }
        n /= 10;
    }
       
}