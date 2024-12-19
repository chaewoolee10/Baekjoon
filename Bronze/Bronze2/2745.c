//2745
#include <stdio.h>
#include <string.h>

int cal(char c);

int main()
{
    char n[100]; scanf("%s", n);
    int b; scanf("%d", &b);
    long long int result = 0;
    int length = strlen(n);
    
    int sqrt = 1;
    for(int i = length - 1; i >= 0; i--)
    {
        result += cal(n[i]) * sqrt;
        sqrt *= b;
    }
    printf("%lld", result);
}
int cal(char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 10;
    }
    else
    {
        return c - '0';
    }
}