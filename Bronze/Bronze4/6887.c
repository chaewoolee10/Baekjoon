//6887
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    if(n < 4)
    {
        printf("The largest square has side length 1.");
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        if(i * i > n)
        {
            printf("The largest square has side length %d.", i - 1);
            break;
        }
    }
}