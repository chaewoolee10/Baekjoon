//2581
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n); 
    int m; scanf("%d", &m);
    
    int sum = 0;
    int min = m;
    int prime = 0;
    
    for(int i = n; i <= m; i++)
    {
        for(int j = 2; j <= i; j++)
        {
            if(i % j == 0)
            {
                if(i == j)
                {
                    prime = i;
                    //printf("%d ", prime);
                    sum += prime;
                    if(min > prime)
                    {
                        min = prime;
                    }
                }
                break;
            }
        }
    }
    if(min == m && min != prime)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d",sum,min);    
    }
    
}