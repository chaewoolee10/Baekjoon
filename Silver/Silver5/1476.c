//1476
#include <stdio.h>

int main()
{
    int e; scanf("%d", &e);
    int s; scanf("%d", &s);
    int m; scanf("%d", &m);
    
    int i = 1;
    int j = 1;
    int k = 1;
    
    int num = 1;
    
    while(1)
    {
        
        if(i == 16)
        {
            i = 1;
        }
        if(j == 29)
        {
            j = 1;
        }
        if(k == 20)
        {
            k = 1;
        }
        
        if(i == e && j == s && k == m)
        {
            printf("%d", num);
            break;
        }
        
        i++;
        j++;
        k++;
        num++;
    }
}