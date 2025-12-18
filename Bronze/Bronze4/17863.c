//17863
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    n /= 10000;
    int fivecount = 0;
    
    for(int i = 0; i < 4; i++)
    {
        if(n % 10 == 5)
        {
            fivecount++;
        }
        n /= 10;
    }
    fivecount == 3 ? printf("YES") : printf("NO");
}