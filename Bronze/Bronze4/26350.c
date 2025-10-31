//26350
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int t; scanf("%d", &t);
        int arr[20] = {}; scanf("%d", &arr[0]);
        int check = 1;
        for(int j = 1; j < t; j++)
        {
            scanf("%d", &arr[j]);
            if(arr[j - 1] * 2 > arr[j])
            {
                check = 0;
            }
        }
        printf("Denominations: ");
        for(int k = 0; k < t; k++)
        {
            printf("%d ", arr[k]);
        }
        if(check)
        {
            printf("\nGood coin denominations!\n\n");
        }
        else
        {
            printf("\nBad coin denominations!\n\n");
        }
    }
}