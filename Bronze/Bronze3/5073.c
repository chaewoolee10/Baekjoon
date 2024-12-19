//5073
#include <stdio.h>

int main()
{
    int arr[3] = {};
    
    while(1)
    {
        int max = 0;
        int maxindex;
        int remainsum = 0;
        
        for(int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
            if(max < arr[i])
            {
                max = arr[i];
                maxindex = i;
            }
            
        }
        for(int i = 0; i < 3; i++)
        {
            if(maxindex != i)
            {
                remainsum += arr[i];
            }
        }
        if(*arr == 0 && *(arr+1) == 0 && *(arr+2) == 0)
        {
            break;
        }
        if(remainsum <= max || arr[0] == 0 || arr[1] == 0 || arr[2] == 0)
        {
            printf("Invalid\n");
        }
        else
        {
            if(arr[0] == arr[2] && arr[0] == arr[1])
            {
                printf("Equilateral\n");
            }
            else if(arr[0] == arr[2] || arr[0] == arr[1] || arr[1] == arr[2])
            {
                printf("Isosceles\n");
            }
            else
            {
                printf("Scalene\n");
            }
            
        }
        
        
    }
}