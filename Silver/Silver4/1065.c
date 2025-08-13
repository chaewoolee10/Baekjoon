//1065
#include <stdio.h>

int hansu_check(int n);

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    
    for(int i = 1; i <= n; i++)
    {
        count += hansu_check(i);
    }
    printf("%d", count);
}

int hansu_check(int n)
{
    int check = 0;
    int inte_to_arr[5] = {};
    
    int i = 0;
    while(1)
    {
        if(n == 0)
        {
            break;
        }
        inte_to_arr[i] = n % 10;
        n /= 10;
        i++;
    }
    int dif = inte_to_arr[0] - inte_to_arr[1];
    for(int j = 0; j < i - 1; j++)
    {
        if(inte_to_arr[j] - inte_to_arr[j + 1] != dif)
        {
            return 0;
        }
    }
    return 1;

}