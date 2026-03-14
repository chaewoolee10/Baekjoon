// 1531
#include <stdio.h>
#define SIZE 105

void draw_func(int picture[SIZE][SIZE], int coordi[4]);

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int picture[SIZE][SIZE] = {};
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        int arr[4] = {};
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[j]);
        }
        draw_func(picture, arr);
    }
    for (int j = 0; j < SIZE; j++)
    {
        for (int k = 0; k < SIZE; k++)
        {
            //printf("%d", picture[j][k]);
            if(picture[j][k] > m) count++;
        }
        //printf("\n");
    }
    printf("%d", count);
}
void draw_func(int picture[SIZE][SIZE], int coordi[4])
{
    for (int i = coordi[1]; i <= coordi[3]; i++)
    {
        for (int j = coordi[0]; j <= coordi[2]; j++)
        {
            picture[i][j]++;
        }
    }
}