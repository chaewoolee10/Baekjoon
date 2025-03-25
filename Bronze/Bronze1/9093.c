//9093
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    getchar();
    
    char str[1002] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%[^\n]s", str);
        getchar();
        
        int length = strlen(str);
        
        int index = 0;
        for(int j = 0; j < length; j++)
        {
            if(str[j] == ' ')
            {
                for(int k = j - 1; k >= index; k--)
                {
                    printf("%c", str[k]);
                }
                printf(" ");
                index = j + 1;
            }
        }
        for(int j = length - 1; j >= index; j--)
        {
            printf("%c", str[j]);
        }
        
        
        printf("\n");
        for(int k = 0; k < length; k++)
        {
            str[k] = '\0';
        }
    }
    
}