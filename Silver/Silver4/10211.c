//10211
#include <stdio.h>

int main()
{
    int t; scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n; scanf("%d", &n);
        int arr[1000] = {};
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        int subset[1002] = {};
        subset[0] = 0;
        for(int j = 1; j < n + 1; j++)
        {
            subset[j] = subset[j - 1] + arr[j - 1];
        }
        int max = subset[1];
        for(int j = n; j > 0; j--)
        {
            for(int k = j - 1; k >= 0; k--)
            {
                int a = subset[j] - subset[k];
                
                if(a > max) max = a;
            }
        }
        printf("%d\n", max);
    }
    
}