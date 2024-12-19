//9012
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    char str[55] = {};
       
    for(int i = 0; i < n; i++)
    {
        scanf("%s",str);
        int length = strlen(str);
        if(*str == ')' || *str == *(str + length - 1))
        {
            printf("NO\n");
        }
        else
        {
            int rightcnt = 0;
            int leftcnt = 0;
            for(int j = 0; j < length; j++)
            {
                if(*(str + j) == '(')
                {
                    rightcnt++;
                }
                else
                {
                    leftcnt++;    
                }
                if(rightcnt < leftcnt)
                {
                    break;
                }
            }
            if(rightcnt == leftcnt)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}