//31428
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[10001] = {};
    getchar();
    for (int i = 0; i < n; i++)
    {
        char c; scanf("%c", &c);
        getchar();
        arr[i] = c - 'a' + 1;
    }
    char a; scanf("%c", &a);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == (a - 'a' + 1))
        {
            sum++;
        }   
    }
    printf("%d", sum);
}