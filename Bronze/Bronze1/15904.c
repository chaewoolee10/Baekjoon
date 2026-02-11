//15904
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1004] = {}; scanf("%[^\n]s", str);
    getchar();
    int length = strlen(str);
    int arr[4] = {};
    for(int i = 0; i < length; i++)
    {
        if(str[i] == 'U') arr[0]++;
        if(arr[0] > 0)
        {
            if(str[i] == 'C') arr[1]++;
        }
        if(arr[1] > 0)
        {
            if(str[i] == 'P') arr[2]++;
        }
        if(arr[2] > 0)
        {
            if(str[i] == 'C') arr[3]++;
        }
    }
    int check = 1;
    for(int i = 0; i < 4; i++)
    {
        if(arr[i] == 0)
        {
            check = 0;
        }
    }
    printf("I ");
    check ? printf("love ") : printf("hate ");
    printf("UCPC");
}
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1004] = {}; scanf("%[^\n]s", str);
    int length = strlen(str);
    char target[5] = "UCPC";
    int idx = 0;
    for(int i = 0; i < length; i++)
    {
        if(str[i] == target[idx])
        {
            idx++;
        }
        if(idx == 4)
        {
            break;
        }
    }
    idx == 4 ? printf("I love UCPC") : printf("I hate UCPC");
}