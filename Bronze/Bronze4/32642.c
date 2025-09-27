//32642
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    long long int count = 0;
    int rage = 0;
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        if(a == 0)
        {
            rage--;
        }
        else
        {
            rage++;
        }
        count += rage;
    }
    printf("%lld", count);
}