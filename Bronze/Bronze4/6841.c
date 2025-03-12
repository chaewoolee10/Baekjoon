//6841
#include <stdio.h>
#include <string.h>

void stringcheck(char *str);

int main()
{
    while(1)
    {
        char str[50] = {};
        scanf("%s", str);
        getchar();
        stringcheck(str);
        
        if(!strcmp(str, "TTYL"))
        {
            break;
        }
    }
}

void stringcheck(char *str)
{
    if(!strcmp(str, "CU"))
    {
        printf("see you\n");
    }
    else if(!strcmp(str, ":-)"))
    {
        printf("I’m happy\n");
    }
    else if(!strcmp(str, ":-("))
    {
        printf("I’m unhappy\n");
    }
    else if(!strcmp(str, ";-)"))
    {
        printf("wink\n");
    }
    else if(!strcmp(str, ":-P"))
    {
        printf("stick out my tongue\n");
    }
    else if(!strcmp(str, "(~.~)"))
    {
        printf("sleepy\n");
    }
    else if(!strcmp(str, "TA"))
    {
        printf("totally awesome\n");
    }
    else if(!strcmp(str, "CCC"))
    {
        printf("Canadian Computing Competition\n");
    }
    else if(!strcmp(str, "CCC"))
    {
        printf("Canadian Computing Competition\n");
    }
    else if(!strcmp(str, "CUZ"))
    {
        printf("because\n");
    }
    else if(!strcmp(str, "TY"))
    {
        printf("thank-you\n");
    }
    else if(!strcmp(str, "YW"))
    {
        printf("you’re welcome\n");
    }
    else if(!strcmp(str, "TTYL"))
    {
        printf("talk to you later\n");
    }
    else
    {
        printf("%s\n", str);
    }
}