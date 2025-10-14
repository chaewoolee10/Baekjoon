#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    char str[55] = {}; scanf("%s", str);
    
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        
    }
    printf("%d", count);
}
