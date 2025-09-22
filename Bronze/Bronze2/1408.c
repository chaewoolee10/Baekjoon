//1408
#include <stdio.h>

int hourtosec(char *time);

int main()
{
    char now[10] = {}; scanf("%s", now);
    char start[10] = {}; scanf("%s", start);
    
    int now_sec = hourtosec(now);
    int start_sec = hourtosec(start);
    
    int remain = start_sec - now_sec;
    if(remain < 0)
    {
        remain = 24 * 3600 + remain;
    }
    if(remain / 3600 < 10)
    {
        printf("0%d:", remain / 3600);
    }
    else
    {
        printf("%d:", remain / 3600);    
    }
    remain %= 3600;
    if(remain / 60 < 10)
    {
        printf("0%d:", remain / 60);
    }
    else
    {
        printf("%d:", remain / 60);    
    }
    remain %= 60;
    if(remain < 10)
    {
        printf("0%d", remain);
    }
    else
    {
        printf("%d", remain);    
    }
}

int hourtosec(char *time)
{
    int hour = (time[0] * 10 + time[1]) * 3600;
    int min = (time[3] * 10 + time[4]) * 60;
    int sec = (time[6] * 10 + time[7]);
    return hour + min + sec;
}