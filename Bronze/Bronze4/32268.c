//32268
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    char str[505] = {}; scanf("%s", str);
    
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'I')
        {
            str[i] = 'i';
        }
        if(str[i] == 'l')
        {
            str[i] = 'L';
        }
    }
    printf("%s", str);
}