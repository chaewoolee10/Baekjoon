//2485
/*
1 3 7 13
 2 4 8
    2 2 2 
    5 9 11
2 6 12 18
 4 6 6
  2 2 2 2 2   
4 8 10 14 16

1 4 13 
 3 9
   7 10 

1 7 13 16
 6 6
 2 -> 3 5 11
 3 -> 4 10 
*/
#include <stdio.h>

int find_gcd(int a, int b);

int main()
{
    int n; scanf("%d", &n);

    int arr[100000] = {};
    int interval[100000] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n - 1; i++)
    {
        interval[i] = arr[i + 1] - arr[i];
    }
    int gcd = find_gcd(interval[0], interval[1]);
    for(int i = 2; i < n - 1; i++)
    {
        gcd = find_gcd(interval[i], gcd);
    }
    int count = 0;
    for(int i = 0; i < n - 1; i++)
    {
        count += interval[i] / gcd - 1;
    }
    printf("%d", count);
}
int find_gcd(int a, int b)
{
    while(1)
    {
        int r = a % b;
        if(r == 0)
        {
            return b;
        }
        a = b;
        b = r;
    }
}