/*
#include <stdio.h>
#include <string.h>
typedef struct
{
    int m;
    int n;
}number;

number find_num(char *str);
int find_gcd(int a, int b);

int main()
{
    char str[20] = {}; scanf("%s", str);
    number num = find_num(str);
    int gcd = find_gcd(num.n, num.m);
    printf("%d:%d", num.n / gcd, num.m / gcd);
    
}

number find_num(char *str)
{
    number a = {};

    int mul = 1;
    int length = strlen(str);
    int i = length - 1;
    while(1)
    {
        if(str[i] == ':')
        {
            break;
        }
        a.m += (str[i] - '0') * mul;
        mul *= 10;
        i--;
    }
    mul = 1;
    i--;
    while(1)
    {
        if(i == -1)
        {
            break;
        }
        a.n += (str[i] - '0') * mul;
        mul *= 10;
        i--;
    }
    return a;
}
int find_gcd(int a, int b)
{
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    
    while(1)
    {
        int r = max % min;
        max = min;
        min = r;
        if(min == 0)
        {
            return max;
        }
    }
}
    */
#include <stdio.h>

void gcd_gen(int *a, int *b);

int main()
{
    int a, b; scanf("%d:%d", &a, &b);
    gcd_gen(&a, &b);
    printf("%d:%d", a, b);
}
void gcd_gen(int *a, int *b)
{
    int a_num = *a;
    int b_num = *b;
    while(1)
    {
        int r = a_num % b_num;
        a_num = b_num;
        b_num = r;
        if(b_num == 0)
        {
            *a /= a_num;
            *b /= a_num;
            break;
        }
    }
}