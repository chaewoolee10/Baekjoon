// 17214
/*
가능한 경우
일차식
    x계수 : 양수 | 음수
    상수계수 : 양수 | 음수 | 0 -> 연산자
0차식(상수만)
    양수 | 음수 | 0
+W (적분상수)

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = {};
    scanf("%s", str);
    int x_coeff = 0;
    int constant = 0;
    char op = 'X';

    int len = strlen(str);
    int start = 0;
    int ten = 1;
    for (int i = len - 1; i >= 0; i--)
    {
        if (i != 0 && (str[i] == '-' || str[i] == '+'))
        {
            op = str[i];
            continue;
        }
        if (str[i] == 'x' && start == 0)
        {
            start = 1;
            ten = 1;
        }
        if (start == 1)
        {
            if (i == 0 && str[i] == '-')
            {
                if (x_coeff == 0)
                    x_coeff = -1;
                else
                    x_coeff *= -1;
            }
            else if (str[i] != 'x')
            {
                x_coeff += (str[i] - '0') * ten;
                ten *= 10;
            }
            else if (i == 0 && str[i] == 'x')
            {
                x_coeff = 1;
            }
        }
        else
        {
            if (str[i] != '-')
            {
                constant += (str[i] - '0') * ten;
                ten *= 10;
            }
            else
            {
                constant *= -1;
            }
        }
    }
    if(op == '-') constant *= -1;
    //printf("%d %c %d\n", x_coeff, op, constant);
    
    if(x_coeff != 0)
    {
        x_coeff /= 2;
        if(x_coeff == -1) printf("-xx");
        else if(x_coeff == 1) printf("xx");
        else printf("%dxx", x_coeff);
    }
    if(constant != 0)
    {
        if(constant > 0 && x_coeff != 0) printf("+");
        if(constant == -1) printf("-x");
        else if(constant == 1) printf("x");
        else printf("%dx", constant);
    }
    if(x_coeff != 0 || constant != 0)
    {
        printf("+W");
    }
    else
    {
        printf("W");
    }
    
}