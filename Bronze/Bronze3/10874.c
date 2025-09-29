//10874
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[103] = {};
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            int check = j % 5 + 1;
            
            int a; scanf("%d", &a);
            if(a != check)
            {
                arr[i] = -1;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            printf("%d\n", i + 1);
        }
    }
}