//2864
#include <stdio.h>
#include <string.h>

int maxcal(char *str);
int mincal(char *str);

int main()
{
    char x[7] = {}; scanf("%s", x);
    char y[7] = {}; scanf("%s", y);
    
    int max = maxcal(x) + maxcal(y);
    int min = mincal(x) + mincal(y);
    
    printf("%d %d", min, max);
    
}

int maxcal(char *str)
{
    char max[7] = {};
    int length = strlen(str);
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] == '5')
        {
            max[i] = '6';
        }
        else
        {
            max[i] = str[i];
        }
    }
    
    int n = 0;
    int ten = 1;
    
    for(int i = 0; i < length; i++)
    {
        
        n += (max[length - 1 - i] - '0') * ten;
        ten *= 10;
    }
    
    return n;
}

int mincal(char *str)
{
    char min[7] = {};
    int length = strlen(str);
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] == '6')
        {
            min[i] = '5';
        }
        else
        {
            min[i] = str[i];
        }
    }
    
    int n = 0;
    int ten = 1;
    
    for(int i = 0; i < length; i++)
    {
        
        n += (min[length - 1 - i] - '0') * ten;
        ten *= 10;
    }
    
    return n;
}