//18406
#include <stdio.h>
#include <string.h>

int frontcal(char *str, int n);
int backcal(char *str, int n);

int main()
{
    char str[10] = {}; scanf("%s", str);
    int length = strlen(str);
    
    int front_num = frontcal(str, length);
    int back_num = backcal(str, length);
    
    front_num == back_num ? printf("LUCKY") : printf("READY");
}
int frontcal(char *str, int n)
{
    int sum = 0;
    for(int i = 0; i < n / 2; i++)
    {
        sum += str[i] - '0';
    }
    return sum;
}
int backcal(char *str, int n)
{
    int sum = 0;
    for(int i = n / 2; i < n; i++)
    {
        sum += str[i] - '0';
    }
    return sum;
}