// 1652
#include <stdio.h>

char room[103][103] = {};

int horizoncheck(int n);
int verticalcheck(int n);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", room[i]);
    }
    printf("%d %d", horizoncheck(n), verticalcheck(n));
}
int horizoncheck(int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int j = 0; j < n; j++)
        {
            if (room[i][j] == 'X')
            {
                if (check >= 2)
                {
                    count++;
                }
                check = 0;
            }
            else
            {
                check++;
            }
        }
        if (check >= 2)
        {
            count++;
        }
    }
    return count;
}
int verticalcheck(int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int j = 0; j < n; j++)
        {
            if (room[j][i] == 'X')
            {
                if (check >= 2)
                {
                    count++;
                }
                check = 0;
            }
            else
            {
                check++;
            }
        }
        if (check >= 2)
        {
            count++;
        }
    }
    return count;
}
