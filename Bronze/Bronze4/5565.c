//5565
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < 9; i++)
    {
        int a = 0; scanf("%d", &a);
        
        n -= a;
    }
    printf("%d", n);
}