//10214
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int count_k = 0;
        int count_y = 0;
        
        for(int j = 0; j < 9; j++)
        {
            int y; scanf("%d", &y);
            int k; scanf("%d", &k);
            
            count_k += k;
            count_y += y;
        }
        if(count_k > count_y)
        {
            printf("Korea\n");
        }
        else if(count_k < count_y)
        {
            printf("Yonsei\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
}