//19698
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int w; scanf("%d", &w);
    int h; scanf("%d", &h);
    int l; scanf("%d", &l);
    
    int avail = (w / l) * (h / l);
    if(n < avail)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d", avail);
    }
    
    
}