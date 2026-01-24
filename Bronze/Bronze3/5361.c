//5361
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[5] = {35034, 23090, 19055, 12530, 18090};
    
    for(int i = 0; i < n; i++)
    {
        long long int sum = 0;
        for(int j = 0; j < 5; j++)
        {
            int a; scanf("%d", &a);
            sum += a * arr[j];
        }
        double sum_d = (double)(sum) / 100.0;
        printf("$%.2lf\n", sum_d);
    }
}