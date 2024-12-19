//1076
#include <stdio.h>
#include <string.h>

int color(char color[])
{
    if(!strcmp(color, "black")) // strcmp : 두 문자열이 완전히 같다면 0을 반환함
    {
        return 0;
    }
    else if(!strcmp(color, "brown"))
    {
        return 1;
    }
    else if(!strcmp(color, "red"))
    {
        return 2;
    }
    else if(!strcmp(color, "orange"))
    {
        return 3;
    }
    else if(!strcmp(color, "yellow"))
    {
        return 4;
    }
    else if(!strcmp(color, "green"))
    {
        return 5;
    }
    else if(!strcmp(color, "blue"))
    {
        return 6;
    }
    else if(!strcmp(color, "violet"))
    {
        return 7;
    }
    else if(!strcmp(color, "grey"))
    {
        return 8;
    }
    else // white
    {
        return 9;
    }

}

int main()
{
    long int res_val;
    int a;
    char rescolor[10];

    for(int i = 0; i < 3; i++)
    {
        scanf("%s", rescolor);
        if(i == 0)
        {
            res_val = color(rescolor);
        }  
        else if(i == 1)
        {
            res_val *= 10;
            a = color(rescolor);
            res_val += a;
        }
        else
        {
            a = color(rescolor);
            long int tensqr = 1;
            for(int j = 0; j < a; j++)
            {
                tensqr *= 10;
            }
            res_val *= tensqr;
        }
    }
    printf("%ld", res_val);
}

