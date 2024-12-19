//1977
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int min = m;
    int sum = 0;
    
    for(int i = n; i <= m; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j * j == i)
            {
                sum += i;
                if(min > i)
                {
                    min = i;
                }
            }
        }    
    }
    if(min == m && sum == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n", sum);
        printf("%d\n", min);    
    }
    
}