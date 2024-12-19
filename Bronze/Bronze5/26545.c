//26545
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int sum = 0;
    int add;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &add);
        sum += add;
    }
    printf("%d", sum);
}