//4999
#include <stdio.h>
#include <string.h>

int stringcheck();

int main()
{
    int jae = stringcheck();
    int doc = stringcheck();
    
    jae >= doc ? printf("go") : printf("no");
}

int stringcheck()
{
    char str[1001] = {};
    scanf("%s", str);
    return strlen(str) - 1;
}