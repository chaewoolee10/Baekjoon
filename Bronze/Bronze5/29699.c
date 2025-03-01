//29699
#include <stdio.h>

int main()
{
    char str[16] = "WelcomeToSMUPC";
    
    int n; scanf("%d", &n);
    
    if(n % 14 == 0)
    {
        printf("C");
    }
    else
    {
        printf("%c", str[n % 14 - 1]);
    }
    
}