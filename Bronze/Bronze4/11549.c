//11549
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        int a; scanf("%d", &a);
        if(n == a)
        {
            count++;
        }
    }
    printf("%d", count);
}