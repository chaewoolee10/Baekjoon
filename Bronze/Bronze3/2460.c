//2460
#include <stdio.h>

int main()
{
    int count = 0;
    int max = 0;
    int max_10000 = 0;
    for(int i = 0; i < 10; i++)
    {
        int a, b; scanf("%d %d", &a, &b);
        
        count += b - a;
        if(count > max)
        {
            max = count;
        }
        if(max > 10000)
        {
            max_10000 = 1;
        }
    }
    max_10000 ? printf("10000") : printf("%d", max);
}