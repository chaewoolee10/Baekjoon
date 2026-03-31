// 15725
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = {};
    scanf("%s", str);
    int len = strlen(str);

    int start = 0;
    int ten = 1;
    int coeff = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == 'x' && i != 0)
        {
            start = 1;
        }
        else if (start == 1)
        {
            if (i != 0)
            {
                coeff += ten * (str[i] - '0');
                ten *= 10;
            }
            else
            {
                if(str[i] == '-')
                {
                    if(coeff == 0) coeff = -1;
                    else coeff *= -1;
                }
                else
                {
                    coeff += ten * (str[i] - '0');
                    ten *= 10;
                }
            }
        }
        else if(str[i] == 'x' && i == 0)
        {
            coeff = 1;
        }
    }
    printf("%d", coeff);
}