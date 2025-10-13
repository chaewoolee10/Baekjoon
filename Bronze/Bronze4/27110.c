//27110
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int a,b,c; scanf("%d %d %d", &a, &b, &c);
    int sum = 0;
    if(a < n)
    {
        sum += a;
    }
    else
    {
        sum += n;
    }
    if(b < n)
    {
        sum += b;
    }
    else
    {
        sum += n;
    }
    if(c < n)
    {
        sum += c;
    }
    else
    {
        sum += n;
    }
    printf("%d", sum);
}