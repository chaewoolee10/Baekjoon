// 2578
#include <stdio.h>

int dat[6][6] = {};
int bingoarr[6][6] = {};

void bingofunc(int a, int count);
int bingocheckfunc();

int horizontal();
int vertical();
int diagonal();

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &dat[i][j]);
        }
    }
    int bingocheck = 0;
    int count = 1;
    int finalcount = 0;
    int first_check = 0;
    for (int i = 0; i < 25; i++)
    {
        int a;
        scanf("%d", &a);
        bingofunc(a, count);
        if (count >= 12 && bingocheck < 3)
        {
            bingocheck = bingocheckfunc();
        }
        if (bingocheck >= 3 && first_check == 0)
        {
            finalcount = count;
            first_check = 1;
        }
        count++;
    }
    printf("%d", finalcount);
}
void bingofunc(int a, int count)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a == dat[i][j])
            {
                bingoarr[i][j] = count;
            }
        }
    }
    // printf("\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("%d ", bingoarr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
}
int bingocheckfunc()
{
    int h = horizontal();
    int v = vertical();
    int d = diagonal();

    // printf("%d %d %d\n", h, v, d);
    // return horizontal() + vertical() + diagonal();
    return h + v + d;
}
int horizontal()
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        int check = 1;
        for (int j = 0; j < 5; j++)
        {
            if (bingoarr[i][j] == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            count++;
        }
    }
    return count;
}
int vertical()
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        int check = 1;
        for (int j = 0; j < 5; j++)
        {
            if (bingoarr[j][i] == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            count++;
        }
    }
    return count;
}
int diagonal()
{
    int count = 0;
    int j = 0;
    int check = 1;
    for (int i = 0; i < 5; i++)
    {
        if (bingoarr[i][j] == 0)
        {
            check = 0;
        }
        j++;
    }
    if (check == 1)
    {
        count++;
    }
    check = 1;
    for (int i = 0; i < 5; i++)
    {
        j--;
        if (bingoarr[j][i] == 0)
        {
            check = 0;
        }
    }
    if (check == 1)
    {
        count++;
    }
    return count;
}
