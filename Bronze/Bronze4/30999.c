#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        char str[105] = {}; 
        scanf("%s", str);
        int tmp = 0;
        for(int j = 0; j < m; j++)
        {
            if(str[j] == 'O')
            {
                tmp++;
            }
        }
        if(tmp >= m / 2 + 1)
        {
            count++;
        }
    }
    printf("%d", count);
}