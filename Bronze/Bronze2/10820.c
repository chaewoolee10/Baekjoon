//10820
#include <stdio.h>
#include <string.h>

void stringcheck(char *str);

int main()
{
    char str[105] = {};
    int count = 0;
    for(int i = 0; i < 100; i++)
    {
        if(scanf("%[^\n]s", str) == EOF)
        {
            break;
        }
        getchar();
        stringcheck(str);
        count++;
    }    
}

void stringcheck(char *str)
{
    int arr[4] = {};
    int length = strlen(str);
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            arr[0]++;
        }
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            arr[1]++;
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            arr[2]++;
        }
        if(str[i] == ' ')
        {
            arr[3]++;
        }
    }
    for(int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
}