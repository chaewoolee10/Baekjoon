//28113
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    if(a < b)
    {
        printf("Bus");
    }
    else if(a > b)
    {
        printf("Subway");
    }
    else
    {
        printf("Anything");
    }
}