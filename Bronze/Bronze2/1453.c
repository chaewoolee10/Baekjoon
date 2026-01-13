//1453
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[102] =  {};
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        if(!arr[a])
        {
            arr[a]++;
        }
        else
        {
            count++;
        }
    }
    printf("%d", count);
}