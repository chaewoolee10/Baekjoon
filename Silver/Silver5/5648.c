#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long int arr[1000000] = {};
int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        char str[15] = {}; scanf("%s", str);
        getchar();
        int length = strlen(str);
        long long int mul = 1;
        for(int j = 0; j < length; j++)
        {
            arr[i] += (str[j] - '0') * mul;
            mul *= 10;
        }
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    for (int i = 0; i < n; i++)
    {
        printf("%lld\n", arr[i]);
    }
    
}

int compare(const void *a, const void *b)
{
    const long long int *pa = (const long long int *)a;
    const long long int *pb = (const long long int *)b;
    
    if(*pa > *pb)
    {
        return 1;
    }
    else if(*pa < *pb)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    
}