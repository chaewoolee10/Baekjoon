//9933
#include <stdio.h>
#include <string.h>

void reversefunc(char *str);

int main()
{
    int n; scanf("%d", &n);
    char str[100][14] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    int checker = 0;
    for(int i = 0; i < n; i++)
    {
        char target[14] = {};
        strcpy(target, str[i]);
        reversefunc(target);
        
        for(int j = 0; j < n; j++)
        {
            int length = strlen(target);
            if(!strcmp(target, str[j]))
            {
                printf("%d %c", length, str[j][length / 2]);
                checker = 1;
                break;
            }
        }
        if(checker == 1)
        {
            break;
        }
    }
}

void reversefunc(char *str)
{
    int length = strlen(str);
    for(int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}