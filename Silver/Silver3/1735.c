//1735
#include <stdio.h>

void sum_div(int *arr);

int main()
{
    int arr[4] = {};
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum_div(arr);
    
    int numerator = arr[0];
    int denominator = arr[1];
    
    int a = denominator;
    
    for(int i = 1; i <= a; i++)
    {
        //printf("%d %d %d\n", numerator, denominator, i);
        if(numerator % i == 0 && denominator % i == 0)
        {
            numerator /= i;
            denominator /= i;
            i = 1;
        }
        if(denominator < i)
        {
            break;
        }
        
    }
    printf("%d %d", numerator, denominator);
    
}

void sum_div(int *arr)
{
    arr[0] *= arr[3]; //분자 통분
    arr[2] *= arr[1]; //분자 통분
    arr[1] *= arr[3]; //분모끼리 곱
    
    arr[0] += arr[2]; //분수 덧셈
    
}