//1340
//계산식(그 달 전까지 일수 + 전 날까지 일수 + 시간만큼 나누기)/365일
#include <stdio.h>
#include <string.h>

typedef struct date
{
    int month;
    int day;
    int time;
}DATE;

int monthinvert(char *month);
int leapcheck(char *year);
int dayinvert(char *day);
int timeinvert(char *hour, char *minute);

int main()
{
    char arr[5][10] = {};
    int monthtoday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    DATE n;
    
    char str[25] = {}; scanf("%[^\n]s", str);
    char *ptr = strtok(str, ",: ");
    int i = 0;
    while(ptr != NULL)
    {
        strcpy(arr[i], ptr);
        ptr = strtok(NULL, ",: ");
        i++;
    }
    
    monthtoday[1] += leapcheck(arr[2]);
    n.month = monthinvert(arr[0]);
    n.day = dayinvert(arr[1]);
    double sum = 0.0;
    for(int i = 0; i < n.month - 1; i++) //해당하는 달의 전 달까지
    {
        sum += (double)monthtoday[i];
    }
    sum += (double)(n.day - 1); //해당하는 날의 전 날까지
    n.time = timeinvert(arr[3], arr[4]);
    sum += (double)(n.time) / 1440.0;
    
    double result = sum / (365.0 + (double)leapcheck(arr[2]));
    printf("%.10lf", result * 100.0);
}

int monthinvert(char *month)
{
    if(!strcmp(month, "January"))
    {
        return 1;
    }
    else if(!strcmp(month, "February"))
    {
        return 2;
    }
    else if(!strcmp(month, "March"))
    {
        return 3;
    }
    else if(!strcmp(month, "April"))
    {
        return 4;
    }
    else if(!strcmp(month, "May"))
    {
        return 5;
    }
    else if(!strcmp(month, "June"))
    {
        return 6;
    }
    else if(!strcmp(month, "July"))
    {
        return 7;
    }
    else if(!strcmp(month, "August"))
    {
        return 8;
    }
    else if(!strcmp(month, "September"))
    {
        return 9;
    }
    else if(!strcmp(month, "October"))
    {
        return 10;
    }
    else if(!strcmp(month, "November"))
    {
        return 11;
    }
    else if(!strcmp(month, "December"))
    {
        return 12;
    }
    else
    {
        return 0;
    }
    
}

int leapcheck(char *year)
{
    
    int year_int = 0;
    for(int i = 0; i < 4; i++)
    {
        year_int += year[i] - '0';
        year_int *= 10;
    }
    year_int /= 10;
    
    if(year_int % 400 == 0)
    {
        return 1;
    }
    else if(year_int % 4 == 0 && year_int % 100 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int dayinvert(char *day)
{
    int day_int = 0;
    day_int += (day[0] - '0') * 10 + (day[1] - '0');
    return day_int;
}
int timeinvert(char *hour, char *minute)
{
    int time = 0;
    time += dayinvert(hour) * 60 + dayinvert(minute);
    return time;
    
}