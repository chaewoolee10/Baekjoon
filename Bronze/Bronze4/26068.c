//26068
#include <stdio.h>
#include <string.h>

int strtoint(char* str);
int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        char str[10] = {}; scanf("%s", str);
        int a = strtoint(str);
        if(a <= 90)
        {
            count++;
        }
    }
    printf("%d", count);
}
int strtoint(char* str)
{
    int a = 0;
    int length = strlen(str) - 1;
    int ten = 1;
    while(1)
    {
        if(str[length] == '-')
        {
            return a;
        }
        a += (str[length] - '0') * ten;
        length--;
        ten *= 10;
    }
}