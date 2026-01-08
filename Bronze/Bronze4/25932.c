//25932
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int arr[12] = {};
        int zack = 0;
        int mack = 0;
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j] == 17)
            {
                zack++;
            }
            else if(arr[j] == 18)
            {
                mack++;
            }
        }
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
        if(zack == 1 && mack == 1)
        {
            printf("both\n");
        }
        else if(zack == 0 && mack == 1)
        {
            printf("mack\n");
        }
        else if(zack == 1 && mack == 0)
        {
            printf("zack\n");
        }
        else
        {
            printf("none\n");
        }
        printf("\n");
    }
}