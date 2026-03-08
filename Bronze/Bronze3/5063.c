//5063
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        int r, e, c; scanf("%d %d %d", &r, &e, &c);
        
        if(r < e - c)
        {
            printf("advertise\n");
        }
        else if(r == e - c)
        {
            printf("does not matter\n");
        }
        else
        {
            printf("do not advertise\n");
        }
        
    }
    
}