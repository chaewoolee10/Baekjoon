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
    a.day += n;
    if(a.day > 30)
    {
        a.day += n;
        a.month += a.day / 30;
        a.day %= 30;
    }
    if(a.month > 12)
    {
        a.year += a.month / 12;
        a.month %= 12;
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