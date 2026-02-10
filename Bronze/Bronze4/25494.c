//25494
#include <stdio.h>

int main()
{
    int count; scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        int cnt = 0;
        for(int j = 1; j <= a; j++)
        {
            for(int k = 1; k <= b; k++)
            {
                for(int l = 1; l <= c; l++)
                {
                    if(j % k == k % l && k % l == l % j)
                    {
                        cnt++;
                    }
                }
            }
        }
        printf("%d\n", cnt);
    }
    
}