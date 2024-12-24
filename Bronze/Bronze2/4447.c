// 4447
#include <stdio.h>
#include <string.h>

int checker(char *str);

int main()
{
    int n; scanf("%d", &n);
    getchar();
    
    for (int i = 0; i < n; i++)
    {
        char str[30] = {};
        scanf("%[^\n]s", str);
        getchar();
        int check = checker(str);

        if(check == 1)
        {
            printf("%s is GOOD\n", str);
        }
        else if(check == -1)
        {
            printf("%s is A BADDY\n", str);
        }
        else
        {
            printf("%s is NEUTRAL\n", str);
        }
    }
}
int checker(char *str)
{
    int length = strlen(str);
    int gcount = 0;
    int bcount = 0;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'g' || str[i] == 'G')
        {
            gcount++;
        }
        if (str[i] == 'b' || str[i] == 'B')
        {
            bcount++;
        }
    }
    if(gcount > bcount)
    {
        return 1;
    }
    else if(gcount < bcount)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}