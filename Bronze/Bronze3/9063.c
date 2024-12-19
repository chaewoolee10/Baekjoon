//9063
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int xmax; scanf("%d", &xmax);
    int xmin = xmax; 
    int ymax; scanf("%d", &ymax);
    int ymin = ymax;
    if(n == 1)
    {
        printf("0");
        return 0;
    }
    for(int i = 1; i < n; i++)
    {
        int x; scanf("%d", &x);
        int y; scanf("%d", &y);
        if(x > xmax)
        {
            xmax = x;
        }
        if(y > ymax)
        {
            ymax = y;
        }
        if(x < xmin)
        {
            xmin = x;    
        }
        if(y < ymin)
        {
            ymin = y;
        }   
    }
    printf("%d", (xmax - xmin) * (ymax - ymin));
}