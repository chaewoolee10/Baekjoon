#include <stdio.h>
#include <string.h>

int main() {
    char str[1000] = {}; scanf("%s", str);
    int length = strlen(str);
    int arr[1000] = {};
    
    for(int i = 0; i < length; i++)
    {
        arr[i] = str[i] - '0';            
    }
    
    int count = 0;
    for(int i = 0; i < length; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i; j < length; j++)
            {
               if(arr[j] != arr[i])
               {
                   count++;
                   printf("%d\n", j);
                   i = j + 1;
                   break; //break 추가하기
               }
            }   
        }
    }
    printf("%d", count);
}
