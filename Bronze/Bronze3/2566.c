//2566
#include <stdio.h>

int main()
{
    int arr[9][9];
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = 0;
    int maxrow = 0; // 행
    int maxcolomn = 0; // 열

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
                maxrow = i;
                maxcolomn = j;
            }
        }
    }
    printf("%d\n", max);
    printf("%d %d", maxrow+1, maxcolomn+1);
}