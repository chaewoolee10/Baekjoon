//3009
#include <stdio.h>
int count(int a[3])
{
    int count = 0;
    int k;
    for(int i = 1; i < 3; i++)
    {
        if(*a == *(a + i))
        {
            count++;
        }
        else
        {
            k = *(a + i);     
        }
    }
    if(count == 0)
    {
        return *a;    
    }
    else
    {
        return k;
    }  
}

int main()
{
    int x[3] = {};
    int y[3] = {};
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    int x_req = count(x);
    int y_req = count(y);
    
    printf("%d %d\n", x_req, y_req);
    
}