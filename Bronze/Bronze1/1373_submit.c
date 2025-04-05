//1373
#include <stdio.h>
#include <string.h>

void strchecker(char *a);

int main()
{  
    char str[1000003] = {};
    
    scanf("%s", str);
    int length = strlen(str);
    
    char str1[4] = {};
    if(length % 3 == 1)
    {
        for(int i = 0; i < length; i++)
        {
            str[length - i + 1] = str[length - i - 1];
        }
        str[0] = '0';
        str[1] = '0';
        
    }
    else if(length % 3 == 2)
    {
        for(int i = 0; i < length; i++)
        {
            str[length - i] = str[length - i - 1];
        }
        str[0] = '0';
        
    }
    strchecker(str);
    
}

void strchecker(char *a)
{
    int length = strlen(a);
    
    for(int i = 0; i < length; i += 3)
    {
        int output = 0;
        int k = 1;
        for(int j = i + 2; j >= i; j--)
        {
            output += (a[j] - '0') * k;
            k *= 2;
        }
        printf("%d", output);
    }
}