//10699
#include <stdio.h>
#include <time.h>



int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    if(tm.tm_mon+1 < 10)
    {
        if(tm.tm_mday < 10)
        {
            printf("%d-0%d-0%d", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday);        
        }
        else
        {
            printf("%d-0%d-%d", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday);
        }
    }
    else
    {
        printf("%d-%d-%d", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday);
    }
    
    
    
}