//30087
#include <stdio.h>
#include <string.h>

void stringcheck();

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        stringcheck();    
    }
    
}

void stringcheck()
{
    char str[25] = ""; scanf("%s", str);
    
    if(!strcmp(str, "Algorithm"))
    {
        printf("204\n");
    }
    else if(!strcmp(str, "DataAnalysis"))
    {
        printf("207\n");
    }
    else if(!strcmp(str, "ArtificialIntelligence"))
    {
        printf("302\n");
    }
    else if(!strcmp(str, "CyberSecurity"))
    {
        printf("B101\n");
    }
    else if(!strcmp(str, "Network"))
    {
        printf("303\n");
    }
    else if(!strcmp(str, "Startup"))
    {
        printf("501\n");
    }
    else
    {
        printf("105\n");
    }
    
}