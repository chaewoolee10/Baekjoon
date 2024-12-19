//1284
#include <stdio.h>

int numcount(int num);

int main()
{
    int n = 1; 
    
    while(1)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        int a = n;
        int cm = 1;
        while(a != 0)
        {
            int num = a % 10;
            a /= 10;
            cm += numcount(num);
        }
        printf("%d\n", cm);
    }
}

int numcount(int num)
{
    switch (num)
    {
    case 1:
        return 3;
        break;
    
    case 0:
        return 5;
        break;
    
    default:
        return 4;
        break;
    }
}