//10811
#include <stdio.h>

int main()
{
    int arr[104];
    for(int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    for(int k = 0; k < m; k++)
    {
        int i; scanf("%d", &i);
        int j; scanf("%d", &j);
        
        for(int reverse = 0; reverse <= j-i; reverse++)
        {
            if(reverse > (j-i)/2)
            {
                break;
            }
            int a = arr[j-reverse-1]; 
            arr[j-reverse-1] = arr[i+reverse-1]; 
            arr[i+reverse-1] = a; 
            
        }
            
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}