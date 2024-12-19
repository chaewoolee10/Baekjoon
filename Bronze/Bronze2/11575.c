//11575
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);
        
        char str[1000005] = {}; scanf("%s", str);
        char cipher[1000005] = {};
        
        int strlength = strlen(str);
        
        for(int j = 0; j < strlength; j++)
        {
            cipher[j] = 'A' + (a * (str[j] - 'A') + b) % 26;
        }
        printf("%s\n", cipher);        
    }
}