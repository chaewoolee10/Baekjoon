//3040
#include <stdio.h>

void correct(int *arr, int except1, int except2);

int main()
{
    int arr[9] = {};
    
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    int except1 = 0;
    int except2 = 0;
    for(int i = 0; i < 9; i++)
    {
       
        except1 = i;
        for(int j = 0; j < 9; j++)
        {
            int sum = 0;
            if(j == except1) continue;
            else except2 = j;
            
            for(int k = 0; k < 9; k++)
            {
                if(k == except1 || k == except2)
                {
                    continue;
                }
                sum += arr[k];
            }
            if(sum == 100)
            {
                correct(arr, except1, except2);
                return 0;
            }
        }
        
    }
}
void correct(int *arr, int except1, int except2)
{
    for(int i = 0; i < 9; i++)
    {
        if(i == except1 || i == except2)
        {
            continue;
        }
        else
        {
            printf("%d\n", arr[i]);
        }
    }
}