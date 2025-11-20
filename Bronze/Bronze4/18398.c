//18398
#include <stdio.h>

void calcu();

int main()
{
    int t; scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        calcu();
    }
}

void calcu()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);
        
        printf("%d %d\n", a + b, a * b);
    }
}