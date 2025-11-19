//30031
#include <stdio.h>

int bill(int w);

int main()
{
    int n; scanf("%d", &n);
    long long int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        int w; scanf("%d", &w);
        int h; scanf("%d", &h);
        sum += bill(w);
    }
    printf("%lld", sum);
}

int bill(int w)
{
    switch (w)
    {
    case 136:
        return 1000;
    case 142:
        return 5000;
    case 148:
        return 10000;
    case 154:
        return 50000;
    default:
        return 0;
        break;
    }
}