//2010
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int sum = 0;
    
    for(int i = 1; i < n; i++)
    {
        int a; scanf("%d", &a);
        sum += a - 1;
    }
    int a; scanf("%d", &a);
    sum += a;
        
    printf("%d", sum);
    
}