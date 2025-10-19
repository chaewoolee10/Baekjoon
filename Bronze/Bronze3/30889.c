//30889
#include <stdio.h>
#include <string.h>

int main()
{
    int arr[10][23] = {};
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        char str[4] = {}; scanf("%s", str);
        int length = strlen(str);
        
        int row = str[0] - 'A';
        int col = 0;
        if(length == 3)
        {
            col = (str[1] - '0') * 10 + str[2] - '0' - 1;
        }
        else
        {
            col = str[1] - '0' - 1;
        }
        arr[row][col]++;
    }
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            if(arr[i][j] != 0)
            {
                printf("o");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}