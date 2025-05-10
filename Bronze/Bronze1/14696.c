// 14696
#include <stdio.h>

char compare(int anum, int *a_arr, int bnum, int *b_arr);
void counter(int num, int *arr, int *count);
void reset(int num, int *arr);
void arrreset(int *arr);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a_arr[100] = {};
        int anum = 0;
        scanf("%d", &anum);
        for (int j = 0; j < anum; j++)
        {
            scanf("%d", &a_arr[j]);
        }

        int b_arr[100] = {};
        int bnum = 0;
        scanf("%d", &bnum);
        for (int j = 0; j < bnum; j++)
        {
            scanf("%d", &b_arr[j]);
        }

        char c = compare(anum, a_arr, bnum, b_arr);
        printf("%c\n", c);
        reset(anum, a_arr);
        reset(bnum, b_arr);
    }
}

char compare(int anum, int *a_arr, int bnum, int *b_arr)
{
    int a_count[4] = {};
    arrreset(a_count);
    counter(anum, a_arr, a_count);
    int b_count[4] = {};
    arrreset(b_count);
    counter(bnum, b_arr, b_count);
    
    int drawchecker = 0;
    char result;
    for(int i = 3; i >= 0; i--)
    {
        if(a_count[i] > b_count[i])
        {
            result = 'A';
            drawchecker = 1;
            break;
        }
        else if(a_count[i] < b_count[i])
        {
            result = 'B';
            drawchecker = 1;
            break;
        }
    }
    return drawchecker == 1 ? result : 'D';
    
}

void counter(int num, int *arr, int *count)
{
    for (int i = 0; i < num; i++)
    {
        switch (arr[i])
        {
        case 4:
            count[3]++;
            break;
        case 3:
            count[2]++;
            break;
        case 2:
            count[1]++;
            break;
        case 1:
            count[0]++;
            break;
        }
    }
}

void reset(int num, int *arr)
{
    for(int i = 0; i < num; i++)
    {
        arr[i] = 0;
    }
}
void arrreset(int *arr)
{
    for(int i = 0; i < 4; i++)
    {
        arr[i] = 0;
    }
}