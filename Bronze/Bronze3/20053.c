//20053
#include <stdio.h>

int main()
{
    int t; scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int n; scanf("%d", &n);
        
        int arr[1000005] = {};
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        int max = arr[0];
        int min = arr[0];
        for(int j = 0; j < n; j++)
        {
            if(max < arr[j]) max = arr[j];
            if(min > arr[j]) min = arr[j];
        }
        printf("%d %d\n", min, max);
    }
    return 0;
}
