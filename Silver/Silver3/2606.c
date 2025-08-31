// 2606
#include <stdio.h>

int queue[50000] = {};
int front = 0;
int back = 0;

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    int dat[103][103] = {};
    int vis[103] = {};
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        int a;
        scanf("%d", &a);
        int b;
        scanf("%d", &b);

        dat[a][b]++;
        dat[b][a]++;
    }
    queue[back] = 1;
    back++;
    vis[1] = 1;
    while (1)
    {
        if (front == back)
        {
            break;
        }
        int cur_row = queue[front];
        //printf("%d\n", cur_row);
        front++;
        for (int i = 1; i <= n; i++)
        {
            int nxt_col = cur_row;
            int nxt_row = i;
            if (dat[nxt_row][nxt_col] == 0)
            {
                continue;
            }
            if (vis[nxt_row] != 0)
            {
                continue;
            }
            queue[back] = nxt_row;
            vis[nxt_row]++;
            count++;
            back++;
        }
    }

    printf("%d", count);
}