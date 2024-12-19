//11653
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    if(n == 1)
    {
        return 0;
    }
    else
    {
        for(int k = 0; k < 20; k++)
        {
            for(int i = 2; i < n; i++)
            {
                if(n % i == 0)
                {
                    printf("%d\n",i);
                    n /= i;
                    break;
                }
            }
        }
        printf("%d", n); 
    }
    
}
