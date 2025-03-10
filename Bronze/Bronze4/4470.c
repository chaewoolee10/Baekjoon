//4470
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    getchar();
    char str[52] = {};
    
    for(int i = 0; i < n; i++)
    {
        char str[52] = {};
        
        scanf("%[^\n]s", str);
        getchar();
        printf("%d. %s\n", i+1, str); 
    }
}