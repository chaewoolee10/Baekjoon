//10809
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100]; scanf("%s",str);
    for(int i = 'a'; i <='z'; i++)
    {
        for(int j = 0; j <= strlen(str); j++)
        {
            if(str[j] == i)
            {
                printf("%d ",j);
                break;
            }
            if(j == strlen(str))
            {
                printf("-1 ");
            }
            
        }
    }

}