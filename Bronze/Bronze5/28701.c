//28701
#include <stdio.h>
#include <math.h>

int sum(int x);
int square(int x);
int cubed(int x);

int main()
{
    int n; scanf("%d", &n);
    printf("%d\n", sum(n));
    printf("%d\n", square(n));
    printf("%d", cubed(n));
    
}

int square(int x)
{
    return pow(sum(x), 2);
}

int sum(int x)
{
    return x * (x + 1) / 2;
}

int cubed(int x)
{
    if(x > 0)
    {
        return pow(x, 3) + cubed(x - 1);
    }
    else
    {
        return 0;
    }
}