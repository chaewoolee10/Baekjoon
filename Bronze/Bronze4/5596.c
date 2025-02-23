//5596
#include <stdio.h>

int main()
{
    int s = 0;
    for(int i = 0; i < 4; i++)
    {
        int n = 0; scanf("%d", &n);
        s += n;
    }
    
    int t = 0;
    for(int i = 0; i < 4; i++)
    {
        int n = 0; scanf("%d", &n);
        t += n;
    }
    
    s >= t ? printf("%d", s) : printf("%d", t);
    
    
}