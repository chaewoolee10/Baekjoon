#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int a[1000] = {};
    int b[1000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= b[i])
        {
            count++;
        }
    }
    printf("%d", count);
}