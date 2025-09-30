//11179
#include <stdio.h>

int max(int n);

int main()
{
    int n; scanf("%d", &n);
    int arr[50] = {};
    
    int idx = 0;
    int max_num = max(n) / 2;
    
    while(1)
    {
        if(n - max_num < 0)
        {
            max_num /= 2;
            idx++;
            continue;
        }
        if(max_num == 0)
        {
            break;
        }
        n -= max_num;
        arr[idx]++;
        max_num /= 2;
        idx++;
    }
    long long int new_num = 0;
    long long int m = 1;
    for(int i = 0; i < idx; i++)
    {
        if(arr[i] == 1)
        {
            new_num += m;
        }
        m *= 2;
    }
    printf("%lld", new_num);
     
}
int max(int n)
{
    int i = 1;
    while(1)
    {
        if(i > n)
        {
            return i;   
        }
        i *= 2;
    }
}