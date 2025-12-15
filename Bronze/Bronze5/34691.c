//34691
#include <stdio.h>
#include <string.h>

void printer(char *str);
int main()
{
    while(1)
    {
        char str[10] = {};
        scanf("%s", str);
        if(!strcmp(str, "end"))
        {
            break;
        }
        printer(str);
        
    }
}
void printer(char *str)
{
    if(!strcmp(str, "animal"))
    {
        printf("Panthera tigris\n");
    }
    else if(!strcmp(str, "tree"))
    {
        printf("Pinus densiflora\n");
    }
    else
    {
        printf("Forsythia koreana\n");
    }
}