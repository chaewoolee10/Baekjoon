// 2033
#include <stdio.h>

void roundprint(int n);

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 5)
    {
        printf("%d",n);
    }
    else if (n >= 5 && n < 10)
    {
        printf("10");
    }
    else
    {
        roundprint(n);
    }
}

void roundprint(int n)
{
    int numarr[9] = {};
    int i = 0;
    while (1)
    {
        if (n == 0)
        {
            break;
        }
        numarr[9 - i - 1] = n % 10;
        n /= 10;
        i++;
    }

    for (int j = 0; j < i - 1; j++)
    {
        if (numarr[9 - j - 1] >= 5)
        {
            numarr[9 - j - 2]++;
        }
        numarr[9 - j - 1] = 0;
    }
    if(numarr[9 - i + 1] == 10)
    {
        numarr[9 - i] = 0;
        numarr[9 - i - 1] = 1;
        i++;
    }
    for(int j = 9 - i; j < 9; j++)
    {
        printf("%d", numarr[j]);
    }
}