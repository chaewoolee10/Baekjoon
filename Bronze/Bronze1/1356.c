//1356
#include <stdio.h>
#include <string.h>

int main()
{
    char n[11] = {};
    scanf("%s", n);
    
    long long int first = 1;
    long long int last = 1;
    int length = strlen(n);
    int checker = 0;
    
    
    for(int i = 1; i < length; i++)
    {
        for(int j = 0; j < i; j++)
        {
            first *= n[j] - '0';
        }
        for(int j = length - 1; j >= i; j--)
        {
            last *= n[j] - '0';
        }
        
        if(first == last)
        {
            printf("YES");
            checker = 1;
            break;
        }
        else
        {
            first = 1;
            last = 1; 
        }
    }
    
    if(checker == 0)
    {
        printf("NO");
    }
}