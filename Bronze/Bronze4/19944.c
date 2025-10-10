//19944
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    if(m < 3)
    {
        printf("NEWBIE!");
    }
    else if(m <= n && m >= 3)
    {
        printf("OLDBIE!");
    }
    else
    {
        printf("TLE!");
    }
}