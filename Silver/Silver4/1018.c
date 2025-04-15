//1018
#include <stdio.h>

int checker(char str[][51], int start_row, int start_col, char *bw, char *wb);

void bwgen(char *bw);
void wbgen(char *wb);

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    char bw[52] = {}; bwgen(bw);
    char wb[52] = {}; wbgen(wb);
    
    char chess[50][51] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", chess[i]);
    }

    int min = 32;
    
    for(int i = 0; i < n - 7; i++)
    {
        for(int j = 0; j < m - 7; j++)
        {
            int a = checker(chess, i, j, bw, wb);
            if(min > a)
            {
                min = a;
            }
        }
    }
    
    printf("%d", min);
}

int checker(char str[][51], int start_row, int start_col, char *bw, char *wb)
{
    int bwcount = 0;
    int wbcount = 0;
    for(int i = start_row; i < start_row + 8; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = start_col; j < start_col + 8; j++)
            {
                if(str[i][j] != bw[j])
                {
                    bwcount++;
                }
                if(str[i][j] != wb[j])
                {
                    wbcount++;
                }
            }
        }
        else
        {
            for(int j = start_col; j < start_col + 8; j++)
            {
                if(str[i][j] != wb[j])
                {
                    bwcount++;
                }
                if(str[i][j] != bw[j])
                {
                    wbcount++;
                }
            }
        }
        
    }
    
    if(bwcount < wbcount)
    {
        return bwcount;
    }
    else
    {
        return wbcount;
    }
}

void bwgen(char *bw)
{
    for(int i = 0; i < 51; i++)
    {
        if(i % 2 == 0)
        {
            bw[i] = 'B';
        }
        else
        {
            bw[i] = 'W';
        }
    }
}
void wbgen(char *wb)
{
    for(int i = 0; i < 51; i++)
    {
        if(i % 2 == 0)
        {
            wb[i] = 'W';
        }
        else
        {
            wb[i] = 'B';
        }
    }
}