//31821
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int menu[10] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &menu[i]);
    }
    int m; scanf("%d", &m);
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        int a; scanf("%d", &a);
        sum += menu[a - 1];
    }
    printf("%d", sum);
}