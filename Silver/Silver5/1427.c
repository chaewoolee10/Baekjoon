#include <stdio.h>

int main()
{
    int arr[10] = {};
    int n; scanf("%d", &n);
    int count = 0;
    
    while (1)
    {
        if(n == 0)
        {
            break;
        }
        arr[count] = n % 10;
        n /= 10;
        count++;
    }
    for(int i = 9; i >= 0; i--)
    {
        for(int j = 0; j < count; j++)
        {
            if(arr[j] == i)
            {
                printf("%d", arr[j]);
            }
        }
    }
    
}