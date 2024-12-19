//1546
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    double arr[1000];
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }

    double max = 0;
    for(int i = 0; i < n; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];
            }
        }

    double newsum = 0;
    for(int i = 0; i < n; i++)
    {
        arr[i] = (arr[i] / max) * 100.0;
        newsum += arr[i];
    }
    printf("%lf",newsum/n);
}