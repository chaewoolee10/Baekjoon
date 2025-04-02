//2693
#include <stdio.h>

int main()
{
    int t; scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        int arr[1001] = {};
        
        for(int j = 0; j < 10; j++)
        {
            int a; scanf("%d", &a);
            
            arr[a]++;
        }
        
        int count = 0;
        
        for(int k = 1000; k >= 1; k--)
        {
            if(arr[k] == 1)
            {
                count++;
            }
            if(count == 3)
            {
                printf("%d\n", k);
                break;
            }
            
            
        }
    }
}