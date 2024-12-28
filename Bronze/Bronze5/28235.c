//28235
#include <stdio.h>
#include <string.h>

void sign(char *str);

int main()
{
    char str[20] = {}; scanf("%s", str);
    sign(str);
        
}
void sign(char *str)
{
    if(!strcmp(str, "SONGDO"))
    {
        printf("HIGHSCHOOL");
    }
    else if(!strcmp(str, "CODE"))
    {
        printf("MASTER");
    }
    else if(!strcmp(str, "ALGORITHM"))
    {
        printf("CONTEST");
    }
    else
    {
        printf("0611");
    }
}