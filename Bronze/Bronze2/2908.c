//2908
#include <stdio.h>

int main()
{
    char str1[5]; scanf("%s", str1);
    char str2[5]; scanf("%s", str2);

    char a;
    a = str1[0];
    str1[0] = str1[2];
    str1[2] = a;
    
    char b;
    b = str2[0];
    str2[0] = str2[2];
    str2[2] = b;

    int A = (str1[0] - '0') * 100 + (str1[1] - '0') * 10 + (str1[2] - '0');
    int B = (str2[0] - '0') * 100 + (str2[1] - '0') * 10 + (str2[2] - '0');
    
    
    A > B ? printf("%d", A) : printf("%d", B);

}