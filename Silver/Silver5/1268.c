//1268
#include <stdio.h>

int arr[1003][5] = {};

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int max = 0;
    int max_num = 1;
    for(int i = 0; i < n; i++)
    {
        int tmp = 0;
        int tmp_idx = i + 1;
        int metarr[1003] = {};
        for(int j = 0; j < 5; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(arr[i][j] == arr[k][j] && i != k)
                {
                    if(metarr[k] == 0)
                    {
                        metarr[k]++; 
                        tmp++;
                    }
                }
            }
        }
        //printf("\n%d count = %d\n", tmp_idx, tmp);
        if(tmp > max)
        {
            max = tmp;
            max_num = tmp_idx;
        }
    }
    printf("%d", max_num);
}