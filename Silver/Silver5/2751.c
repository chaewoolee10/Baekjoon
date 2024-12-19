//2751
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[2000001];
    
    int num;

    for(int i = 0; i < 2000001; i++)
    {
        arr[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if(arr[(num + 1000000)] == 0)
        {
            arr[num + 1000000]++;
        }
        
    }

    for(int i = 0; i < 2000001; i++)
    {
        if(arr[i] != 0)
        {
            printf("%d\n", i-1000000);
        }
    }
}
