// 1308
#include <stdio.h>
typedef struct
{
    int year;
    int month;
    int day;
} date;
int checker(date start, date end);
int yoonchecker(int year);
int monthchecker(int month, int yoon);
int ggchecker(date start, date end);

int main()
{
    date start;
    scanf("%d %d %d", &start.year, &start.month, &start.day);
    date end;
    scanf("%d %d %d", &end.year, &end.month, &end.day);
    int d_day = 0;
    if(ggchecker(start, end))
    {
        printf("gg");
        return 0;
    }
    while (1)
    {
        if (checker(start, end))
        {
            break;
        }
        int yoon = yoonchecker(start.year);
        int now_day = monthchecker(start.month, yoon);
        start.day++;
        d_day++;
        if (start.day > now_day)
        {
            start.month++;
            start.day = 1;
        }
        if (start.month > 12)
        {
            start.year++;
            start.month = 1;
        }
    }
    printf("D-%d\n", d_day);
}
int checker(date start, date end)
{

    if (start.year != end.year || start.month != end.month ||
        start.day != end.day)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int yoonchecker(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0 && year % 400 != 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
int monthchecker(int month, int yoon)
{
    int day = 0;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        if (yoon == 1)
        {
            day = 29;
        }
        else
        {
            day = 28;
        }
    }
    return day;
}
int ggchecker(date start, date end)
{
    if (start.year + 1000 < end.year)
    {
        return 1;
    }
    else if(start.year + 1000 == end.year)
    {
        if (start.month < end.month)
        {
            return 1;
        }
        else if (start.month == end.month)
        {
            if(start.day <= end.day)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}