//10886
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    
    int onecount = 0;
    int zerocount = 0;
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        if(a)
        {
            onecount++;    
        }
        else
        {
            zerocount++;
        }
    }
    onecount < zerocount ? printf("Junhee is not cute!\n") : printf("Junhee is cute!\n");
}
