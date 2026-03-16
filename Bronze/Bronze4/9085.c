//9085
#include <stdio.h>

int main()
{
    int count; scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int n; scanf("%d", &n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a; scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
    
}