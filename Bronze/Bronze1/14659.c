//14659
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int arr[30000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int maxidx;
    
    for(int i = 0; i < n - 1; i++)
    {
        int newmax = 0;
        maxidx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[maxidx] > arr[j])
            {
                newmax++;
            }
            if(arr[maxidx] < arr[j])
            {
                break;
            }
        }
        if(max < newmax)
        {
            max = newmax;
        }
    }
    printf("%d", max);
}