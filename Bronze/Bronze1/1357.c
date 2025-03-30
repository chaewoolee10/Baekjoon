//1367
#include <stdio.h>
#include <string.h>

int reverse(char *str);

int main()
{
    int sum = 0;
    
    for(int j = 0; j < 2; j++)
    {
        char x[5] = {0}; scanf("%s", x);
        
        for(int i = 0; i < 4; i++)
        {
            if(x[i] == '\0')
            {
                x[i] = '-';
            }
        }
        sum += reverse(x);
    }
    
    char sum_char[5] = {'-','-','-','-'};
    
    for(int i = 3; i >= 0; i--)
    {
        if(sum == 0)
        {
            break;
        }
        sum_char[i] = sum % 10 + '0';
        sum /= 10;
    }
    printf("%d", reverse(sum_char));
    
}

int reverse(char *str)
{
    int a = 0;
    int ten = 1;
    
    for(int i = 0; i < 4; i++)
    {
        if(str[i] == '-')
        {
            continue;;
        }
        
        a += (str[i] - '0') * ten;
        ten *= 10;
    }
    return a;
}
