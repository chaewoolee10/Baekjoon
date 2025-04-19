//1316
#include <stdio.h>
#include <string.h>

int groupcheck(char *str);

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        char str[101] = {}; scanf("%s", str);
        
        count += groupcheck(str);
        
    }
    printf("%d", count);
}

int groupcheck(char *str)
{
    int length = strlen(str);
    
    int arr['z' - 'a' + 1][100] = {};
    
    for(int i = 'a'; i <= 'z'; i++)
    {
        int k = 0;
        for(int j = 0; j < length; j++)
        {
            if(str[j] == i)
            {
                arr[i - 'a'][k] = j + 1;
                k++;
            }
        }
    }
    
    int flag = 1;
    
    for(int i = 0; i <= 'z' - 'a'; i++)
    {
        for(int j = 0; j < 99; j++)
        {
            if(arr[i][j] == 0)
            {
                break;
            }
            if(arr[i][j + 1] != 0 && arr[i][j + 1] - arr[i][j] != 1)
            {
                flag = 0;
            }
        }
    }
    
    return flag;
    
}