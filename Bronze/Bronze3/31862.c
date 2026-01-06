//31862
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int x; scanf("%d", &x);
    int max = -1;
    for(int i = 0; i < n; i++)
    {
        int s; scanf("%d", &s);
        int t; scanf("%d", &t);
        if(s + t <= x)
        {
            if(max < s)
            {  
                max = s;
            }
        }
    }
    printf("%d", max);
}