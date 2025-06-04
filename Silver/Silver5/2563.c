#include <stdio.h>

void arrgen(int x, int *arr);

int main()
{
    int arr[100][100] = {};
    int n; scanf("%d", &n);
    int area = 0;
        
    for(int i = 0; i < n; i++)
    {
        int x; scanf("%d", &x);
        int y; scanf("%d", &y);
        for(int k = y; k < y + 10; k++)
        {
            arrgen(x, arr[k]);
        }
    }
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(arr[i][j] != 0)
            {
                area++;
            }
        }
    }
    printf("%d", area);
}
void arrgen(int x, int *arr)
{
    for(int i = x; i < x + 10; i++)
    {
        arr[i]++;
    }
}
