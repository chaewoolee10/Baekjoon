//5585
#include <stdio.h>

int main()
{
    int price; scanf("%d", &price);
    
    int n = 1000 - price;
    int count = 0;
    
    while(n != 0)
    {
        if(n % 500 == 0)
        {
            count++;
            n -= 500;
        }
        else if(n % 100 == 0)
        {
            count++;
            n -= 100;
        }
        else if(n % 50 == 0)
        {
            count++;
            n -= 50;
        }
        else if(n % 10 == 0)
        {
            count++;
            n -= 10;
        }
        else if(n % 5 == 0)
        {
            count++;
            n -= 5;
        }
        else
        {
            count++;
            n -= 1;    
        }
        
    }
    printf("%d", count);
}