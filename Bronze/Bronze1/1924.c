//1924
#include <stdio.h>

int main()
{
    int month; scanf("%d", &month);
    int day; scanf("%d", &day);
    
    int sum = 0;
    for(int i = 1; i < month; i++)
    {
        switch(i)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                sum += 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                sum += 30;
                break;
            default:
                sum += 28;
                break;
        }
    }
    sum += day;
    int week = sum % 7;
    switch (week)
    {
    case 1:
        printf("MON");
        break;
    case 2:
        printf("TUE");
        break;
    case 3:
        printf("WED");
        break;
    case 4:
        printf("THU");
        break;
    case 5:
        printf("FRI");
        break;
    case 6:
        printf("SAT");
        break;
    default:
        printf("SUN");
        break;
    }
    
}