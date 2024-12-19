//5524
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    char str[20] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        int length = strlen(str);
        
        for(int i = 0; i < length; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                printf("%c", str[i] - 'A' + 'a');
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
}