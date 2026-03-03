//4108
#include <stdio.h>

void minesweep(int r, int c);

int main()
{
    while(1)
    {
        int r; scanf("%d", &r);
        int c; scanf("%d", &c);
        if(!r && !c)
        {
            break;
        }
        minesweep(r, c);
    }
}
void minesweep(int r, int c)
{
    char str[104][104] = {};
    int arr[104][104] = {};
    for(int i = 0; i < r; i++)
    {
        scanf("%s", str[i]);
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            int count = 0;
            if(str[i][j] == '*')
            {
                arr[i][j] = '*';
            }
            else
            {
                for(int k = i - 1; k <= i + 1; k++)
                {
                    for(int l = j - 1; l <= j + 1; l++)
                    {
                        if(k < 0 || k > r || l < 0 || l > c)
                        {
                            continue;
                        }
                        if(k == i && l == j)
                        {
                            continue;
                        }
                        if(str[k][l] == '*')
                        {
                            count++;
                        }
                    }
                }
                arr[i][j] = count + '0';
            }
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    } 
}