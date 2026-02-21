//1094
/*

#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[7] = {};
    int start = 64;
    int idx = 0;
    while(1)
    {
        if(n == 0)
        {
            break;
        }
        if(start > n)
        {
            start /= 2;
            idx++;
        }
        else
        {
            n -= start;
            arr[idx]++;
        }
        
    }
    int count = 0;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] == 1) count++;
    }
    printf("%d", count )
}
    */
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    int a = 64;
    while(1)
    {
        if(n == 0) break;
        if(n < a)
        {
            a /= 2;
        }
        else
        {
            n -= a;
            count++;
        }
    }
    printf("%d", count);
}