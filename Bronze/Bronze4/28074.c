//28074
#include <stdio.h>
#include <string.h>

int main()
{
    char str[102] = {}; scanf("%s", str);
    int len = strlen(str);
    int arr[5] = {};
    for (int i = 0; i < len; i++)
    {
        switch (str[i])
        {
        case 'M':
            arr[0]++;
            break;
        case 'O':
            arr[1]++;
            break;
        case 'B':
            arr[2]++;
        break;
        case 'I':
            arr[3]++;
        break;
        case 'S':
            arr[4]++;
        break;
        default:
            break;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == 0)
        {
            printf("NO");
            return 0;
        }
    }   
    printf("YES");
    
}