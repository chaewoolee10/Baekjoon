//2675
#include <stdio.h>
#include <string.h>

int main()
{
    int count; scanf("%d",&count);
    for(int i = 0; i < count; i++)
    {
        int j; scanf("%d",&j);
        char str[1000]; scanf("%s",str);
        for(int k = 0; k < strlen(str); k++)
        {
            for(int l = 0; l < j; l++)
            {
                printf("%c",str[k]);
            }
        }
        printf("\n");
    }

}