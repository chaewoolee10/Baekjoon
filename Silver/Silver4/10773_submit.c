// 10773
#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);
    int arr[1000000] = {};
    int idx = 0;
    for (int i = 0; i < k; i++)
    {
        int a;
        scanf("%d", &a);
        if (a != 0)
        {
            arr[idx] = a;
            idx++;
        }
        else
        {
            if(arr[idx] == 0)
            {
                arr[idx - 1] = 0;
                idx--;
            }
            else
            {
                arr[idx] = 0;    
            }
            
        }
        
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    printf("%lld", sum);
}