//10953
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        char str[4] = {}; scanf("%s", str);
        int a = str[0] - '0';
        int b = str[2] - '0';
        printf("%d\n", a + b);
        
    }
}