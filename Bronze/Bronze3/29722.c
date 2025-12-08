//29722
#include <stdio.h>

typedef struct
{
    int year;
    int month;
    int day;
}DATE;

DATE chartostruc(char *str);

int main()
{
    char str[12] = {}; scanf("%s", str);
    getchar();
    int n; scanf("%d", &n);
    DATE a = chartostruc(str);
    if(a.day > 0)
    {
        int ext_day = a.day + n;
        while(1)
        {
            if(ext_day <= 30)
            {
                a.day = ext_day;
                break;
            }
            ext_day -= 30;
            a.month++;
        }
    }
    if(a.month > 12)
    {
        int ext_month = a.month;
        while(1)
        {
            if(ext_month <= 12)
            {
                a.month = ext_month;
                break;
            }
            ext_month -= 12;
            a.year++;
        }
    }
    printf("%d-",a.year);
    if(a.month < 10)
    {
        printf("0");
    }
    printf("%d-", a.month);
    if(a.day < 10)
    {
        printf("0");
    }
    printf("%d", a.day);
}

DATE chartostruc(char *str)
{
    DATE a = {0, 0, 0};
    int ten = 1000;
    for(int i = 0; i < 4; i++)
    {
        a.year += (str[i] - '0') * ten;
        ten /= 10;
    }
    ten = 10;
    for(int i = 5; i < 7; i++)
    {
        a.month += (str[i] - '0') * ten;
        ten /= 10;
    }
    ten = 10;
    for(int i = 8; i < 10; i++)
    {
        a.day += (str[i] - '0') * ten;
        ten /= 10;
    }
    return a;
}