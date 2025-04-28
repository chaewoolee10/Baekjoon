//27889
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5] = {};
    scanf("%s", str);
    
    if(!strcmp(str, "NLCS"))
    {
        printf("North London Collegiate School");   
    }
    else if(!strcmp(str, "BHA"))
    {
        printf("Branksome Hall Asia");
    }
    else if(!strcmp(str, "KIS"))
    {
        printf("Korea International School");
    }
    else
    {
        printf("St. Johnsbury Academy");
    }
}



