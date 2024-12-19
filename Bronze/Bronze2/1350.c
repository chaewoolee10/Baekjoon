//1350
#include <stdio.h>
long long int count(int n, int *arr, int cluster);

int main()
{
    int n; scanf("%d", &n);
    
    int arr[50] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);    
    }
    
    int cluster; scanf("%d", &cluster);
    
    printf("%lld", count(n, arr, cluster));
    
}

long long int count(int n, int *arr, int cluster)
{
    long long int count = 0;
    for(int i = 0; i < n; i++)
    {
        count += arr[i] / cluster;
        if(*(arr + i) % cluster != 0)
        {
            count++;
        }
    }
    return count * cluster;
}