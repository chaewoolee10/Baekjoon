// 14940
#include <stdio.h>

int vis[1004][1004] = {};
int dat[1004][1004] = {};

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int que_x[1000003] = {};
int que_y[1000003] = {};
int que_addr = 0;
int back = 0;
void vis_set(int n, int m);
void vis_print(int n, int m);
int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    vis_set(n, m);
    while (1)
    {
        if (que_addr == back)
        {
            break;
        }
        int cur_x = que_x[que_addr];
        int cur_y = que_y[que_addr];
        que_addr++;
        for (int i = 0; i < 4; i++)
        {
            int nxt_x = cur_x + dx[i];
            int nxt_y = cur_y + dy[i];
            
            if (nxt_x > m || nxt_y > n || nxt_x < 0 || nxt_y < 0)
            {
                continue;
            }
            if(dat[nxt_y][nxt_x] == 0 || vis[nxt_y][nxt_x] != -1)
            {
                continue;
            }
            vis[nxt_y][nxt_x] = vis[cur_y][cur_x] + 1;
            que_x[back] = nxt_x;
            que_y[back] = nxt_y;
            back++;
        }
    }
    vis_print(n, m);
    
}
void vis_set(int n, int m)
{
    for (int i = 0; i < 1003; i++)
    {
        for (int j = 0; j < 1003; j++)
        {
            vis[i][j] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &dat[i][j]);
            if (dat[i][j] == 2)
            {
                vis[i][j] = 0;
                que_x[back] = j;
                que_y[back] = i;
                back++;
            }
            if (dat[i][j] == 0)
            {
                vis[i][j] = 0;
            }
        }
    }
}
void vis_print(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", vis[i][j]);
        }
        printf("\n");
    }
}