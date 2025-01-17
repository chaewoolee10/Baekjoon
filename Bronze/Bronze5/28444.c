//28444
#include <stdio.h>

int main()
{
    int a = 0;
    int sum1 = 1;
    for(int i = 0; i < 2; i++)
    {
        scanf("%d", &a);
        sum1 *= a;        
    }
    
    int sum2 = 1;
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &a);
        sum2 *= a;
    }
    printf("%d", sum1 - sum2);
    
}