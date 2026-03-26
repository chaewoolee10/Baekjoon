//2346
#include <stdio.h>

int find_idx(int *que, int idx, int n);

int main()
{
    int n; scanf("%d", &n);
    int que[1000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &que[i]);
    }
    int count = n - 1;
    int idx = 0;
    printf("%d ", idx + 1);
    while(1)
    {
        if(count == 0) break;
        count--;
        idx = find_idx(que, idx, n);
        printf("%d ", idx + 1);
        
        for(int i = 0; i < n; i++)
        {
            printf("%d ", que[i]);
        }
        printf("\n");
    }
}
int find_idx(int *que, int idx, int n)
{
    int count = que[idx];
    que[idx] = 0;
    
    if(count < 0)
    {
        count = -1 * count;
        for(int i = 0; i < count; i++)
        {
            idx--;
            if(idx < 0) idx = n - 1;
            if(que[idx] == 0)
            {
                while(1)
                {
                    
                    if(que[idx] != 0) break;
                    idx--;
                    if(idx < 0) idx = n - 1;
                    
                }
            }
            
        }
    }
    else
    {
        for(int i = 0; i < count; i++)
        {
            idx++;
            idx %= n;
            if(que[idx] == 0)
            {
                while(1)
                {
                    
                    if(que[idx] != 0) break;
                    idx++;
                    idx %= n;
                }
            }
            
        }
    }
    return idx;
}