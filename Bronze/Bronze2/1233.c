//1233
#include <stdio.h>

int main()
{
    int s1, s2, s3;
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    
    int arr[1600] = {};
    
    for(int i = 1; i <= s1; i++)
    {
        for(int j = 1; j <= s2; j++)
        {
            for(int k = 1; k <= s3; k++)
            {
               arr[i + j + k -1]++; 
            }
        }
    }  
    
    int max = 0;
    
    for(int i = 0; i < 1600; i++)
    {
        if(max <= arr[i])
        {
            max = arr[i];
        } 
    }
    int i = 0;
    while(1)
    {
        if(arr[i] == max)
        {
            printf("%d", i + 1);
            break;
        }
        i++;
    }
}