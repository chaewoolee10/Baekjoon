//1526
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    while(1)
    {
        int arr[7] = {};
        int n_dup = n;
        int i = 0;
        while(1)
        {
            if(n_dup == 0)
            {
                break;
            }
            arr[i] = n_dup % 10;
            n_dup /= 10;
            i++;
        }
        int flag = 1;
        for(int j = 0; j < i; j++)
        {
            if(arr[j] == 4 || arr[j] == 7)
            {
                continue;
            }
            else
            {
                flag = 0;
            }
        }
        if(!flag)
        {
            n--;
        }
        else
        {
            break;
        }
        }
    printf("%d", n);
}