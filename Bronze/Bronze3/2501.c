//2501
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    int arr[100];

    int j = 0;
    
    for(int i = 0; i <= 99; i++)
    {
        arr[i] = 0;
    }
    
    for(int i = 1; i <= n; i++)
    {

        if(n % i == 0)
        {
            arr[j] = i;
            j++;
        }
    }
    if(k <= sizeof(arr)/sizeof(arr[0])) // 배열의 크기 구하기
    {
        printf("%d", arr[k-1]);
    }
    else
    {
        printf("0");
    }
    
}