//25625
#include <stdio.h>

int main()
{
    int x; scanf("%d", &x);
    int y; scanf("%d", &y);
    
    if(x < y)
    {
        printf("%d", y - x);
    }
    else
    {
        printf("%d", x + y);
    }
    
}