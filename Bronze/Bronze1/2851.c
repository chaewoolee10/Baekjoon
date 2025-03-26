// 2851
#include <stdio.h>

int main()
{
    int arr[10] = {};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = arr[0];
    
    for (int i = 1; i < 10; i++)
    {
        if (100 - (sum + arr[i]) < 0)
        {
            if (100 - sum > (sum + arr[i]) - 100)
            {
                /*
                if (sum >= 100)
                {
                    break;
                }
                else
                {
                    sum += arr[i];
                }*/
                sum += arr[i];
            }
            else if(100 - sum == (sum + arr[i]) - 100)
            {
                sum += arr[i];
            }
            else
            {
                break;
            }
        }
        else
        {
            if (100 - sum > 100 - (sum + arr[i]))
            {
                /*
                if (sum >= 100)
                {
                    break;
                }
                else
                {
                    sum += arr[i];
                }
                */
                sum += arr[i];
            }
            else
            {
                break;
            }
        }
    }
    printf("%d", sum);
}