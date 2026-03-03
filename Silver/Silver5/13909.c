//13909
/*
패턴 : 1 다음 2의 배수로 0이 증가함.
24 = 1 0 2개 1 0 4개 1 0 6개 1 0 8개 
0 : 20개
3 5 7 9 11 13 15...
35 = 1 0 2개 1 0 4개 1 0 6개 1 0 8개 1 0 10개 
0 30개 1 5개
1 0 12개
== 제곱 차례에 1이 나옴
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[100] = {};
    int mul = 1;
    for(int i = 1; i <= n; i++)
    {
        int a = i;
        for(int j = 1; j <= n; j++)
        {
            if(j > n)
            {
                break;
            }
            if(arr[a * j - 1] == 1)
            {
                arr[a * j - 1] = 0;
            }
            else
            {
                arr[a * j - 1] = 1;
            }
        }
        printf("%d : ", i);
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}
*/
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        if(i * i == n)
        {
            printf("%d", i);
            break;
        }
        if(i * i > n)
        {
            printf("%d", i - 1);
            break;
        }
    }
}