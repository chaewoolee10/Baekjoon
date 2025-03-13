//26561
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        long long int result = 0;
        int p = 0; scanf("%d", &p);
        int t = 0; scanf("%d", &t);
        
        result += p - (t / 7) + (t / 4);
        
        printf("%lld\n", result);
        
    }
}