//20499
#include <stdio.h>

int main()
{
    int arr[3] = {};
    scanf("%d%*c%d%*c%d", &arr[0], &arr[1], &arr[2]); 
    //중간 입력 무시, 무시되는 문자 : /
    
    if(arr[0] + arr[2] < arr[1] || arr[1] == 0)
    {
        printf("hasu");
    }
    else
    {
        printf("gosu");
    }
}