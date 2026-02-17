// 10709
#include <stdio.h>

int cal(int idx, char *str);

int main()
{
    int h, w;
    scanf("%d %d", &h, &w);
    char str[103][103] = {};
    int arr[103][103] = {};
    for (int i = 0; i < h; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            arr[i][j] = cal(j, str[i]);
        }
    }
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int cal(int idx, char *str)
{
    int count = 0;
    for (int i = idx; i >= 0; i--)
    {
        if (str[i] == 'c')
        {
            return count;
        }
        count++;
    }
    return -1;
}