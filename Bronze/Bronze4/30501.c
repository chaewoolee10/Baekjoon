//30501
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000][105] = {};
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    int target = 0;
    for(int i = 0; i < n; i++)
    {
        int length = strlen(str[i]);
        for(int j = 0; j < length; j++)
        {
            if(str[i][j] == 'S')
            {
                target = i;
                break;
            }
        }
    }
    printf("%s", str[target]);
}