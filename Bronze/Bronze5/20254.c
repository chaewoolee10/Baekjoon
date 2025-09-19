//20254
#include <stdio.h>

int main()
{
    int arr[4] = {56, 24, 14, 6};
    
    int sum = 0;
    for(int i = 0; i < 4; i++)
    {
        int a; scanf("%d", &a);
        sum += a * arr[i];
    }
    printf("%d", sum);
}