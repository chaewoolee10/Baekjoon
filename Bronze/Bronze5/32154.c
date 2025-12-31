//32154
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    
    char str[10][15] = {"ABCDEFGHJLM","ACEFGHILM"
                        ,"ACEFGHILM","ABCEFGHLM"
                        ,"ACEFGHLM","ACEFGHLM"
                        ,"ACEFGHLM","ACEFGHLM"
                        ,"ACEFGHLM","ABCFGHLM"};
    int length = strlen(str[n - 1]);
    printf("%d\n", length);
    for(int i = 0; i < length; i++)
    {
        printf("%c ", str[n - 1][i]);
    }
    
    
}