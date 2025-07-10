// 11660 2차원 누적 합 공식으로도 풀어보기
#include <stdio.h>
int arr[1024][1024] = {};
int prefix[1025][1025] = {};

void initialset(int n);

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    initialset(n);

    for (int i = 0; i < m; i++)
    {
        int x1, y1, x2, y2; scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int sum = 0;
        for(int k = y1 - 1; k < y2; k++)
        {
            sum += prefix[x2][k] - prefix[x1 - 1][k];
            //printf("%d %d\n", prefix[x2][k], prefix[x1 - 1][k]);
        }
        printf("%d\n", sum);
    }
}
void initialset(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        prefix[0][i] = 0;
        prefix[1][i] = arr[0][i];
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + arr[i - 1][j];
        }
    }
}