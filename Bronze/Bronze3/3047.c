//3047
#include <stdio.h>

int main()
{
    int arr[3] = {}; 
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 3; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    char str[5] = {}; scanf("%s", str);
    for(int i = 0; i < 3; i++)
    {
        switch (str[i])
        {
        case 'A':
            printf("%d ", arr[0]);
            break;
        case 'B':
            printf("%d ", arr[1]);
            break;
        case 'C':
            printf("%d ", arr[2]);
            break;
        
        }
    }
    
}