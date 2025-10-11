//25238
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    double defence = (double)a * (double)(100 - b) / 100.0;
    
    if(defence >= 100.0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    
}