//1297
#include <stdio.h>
#include <math.h>

int main()
{
    int d; scanf("%d", &d);
    int h; scanf("%d", &h);
    int w; scanf("%d", &w);
    
    double sqr = 0;
    double x = 0.0;
    for(int i = 0; i < 20000; i++)
    {
        if(i == h * h + w * w)
        {
            sqr = i; 
            break;       
        }
    }
    
    x = d / sqrt(sqr);
    printf("%d %d", (int)(h * x), (int)(w * x));
    
}