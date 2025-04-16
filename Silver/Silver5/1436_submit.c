//1436
#include <stdio.h>
#include <string.h>

int sixcount(int a);

int main()
{
    int n; scanf("%d", &n);
    
    int count = 0;
    int a = 666;
    while(1)
    {
        if(count == n)
        {
            printf("%d", a - 1);
            break;
        }
        count += sixcount(a);
        a++;
    }
}

int sixcount(int a)
{
    while(1)
    {
        if(a == 0)
        {
            return 0;
        }
        if(a % 1000 == 666)
        {
            return 1;
        }
        else
        {
            a /= 10;   
        }
    }
    
}
