//10768
#include <stdio.h>

int main()
{
    int month; scanf("%d", &month);
    int day; scanf("%d", &day);
    
    if(month < 2)
    {
        printf("Before");
    }
    else if(month > 2)
    {
        printf("After");
    }
    else
    {
        if(day < 18)
        {
            printf("Before");
        }
        else if(day > 18)
        {
            printf("After");
        }
        else
        {
            printf("Special");
        }
    }
}