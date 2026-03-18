//16916
#include <stdio.h>
#include <string.h>

int main()
{
    char str_s[1000005] = {}; scanf("%s", str_s);
    getchar();
    char str_p[1000005] = {}; scanf("%s", str_p);
    
    strstr(str_s, str_p) ? printf("1") : printf("0");
}   