//4673
#include <stdio.h>

int main()
{
    int n[10000] = {};
    for(int i = 0; i < 10000; i++)
    {
        n[i] = i + 1;
    }
    for(int i = 1; i <= 10000; i++)
    {
        int k = i;
        int sum = k;
        while(1)
        {
            if(k == 0)
            {
                break;
            }
            else
            {
                sum += k % 10;
                k /= 10;
            }
        }
        if(sum <= 10000)
        {
            n[sum - 1] = 0;
        }
    }
    for(int i = 0; i < 10000; i++)
    {
        if(n[i] != 0)
        {
            printf("%d\n", n[i]);    
        }
        
    }
    
}