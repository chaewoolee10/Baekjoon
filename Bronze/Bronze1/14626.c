// 14626
#include <stdio.h>
#include <string.h>

int main()
{
    char str[14] = {};
    scanf("%s", str);
    int len = strlen(str);

    int m = str[len - 1] - '0';
    int staridx = 0;
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        if (str[i] != '*')
        {
            if (i % 2 == 0)
            {
                sum += str[i] - '0';
            }
            else
            {
                sum += (str[i] - '0') * 3;
            }
        }
        if(str[i] == '*')
        {
            staridx = i;
        }
    }
    
    for(int i = 0; i <= 9; i++)
    {
        int check = sum + m;
        if(staridx % 2 == 0)
        {
            check += i;
        }
        else
        {
            check += i * 3;
        }
        if(check % 10 == 0)
        {
            printf("%d", i);
            break;
        }
    }
}
