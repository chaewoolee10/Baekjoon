// 30032
#include <stdio.h>

void updown(int n, char *str);
void leftright(int n, char *str);

int main()
{
    int n;
    scanf("%d", &n);
    int d;
    scanf("%d", &d);
    
    getchar();
    
    for (int i = 0; i < n; i++)
    {
        char str[12] = {};
        scanf("%s", str);
        
        d == 1 ? updown(n, str) : leftright(n, str);
        
        printf("%s\n", str);
    }
}

void updown(int n, char *str)
{
    for (int i = 0; i < n; i++)
    {
        switch (str[i])
        {
        case 'd':
            str[i] = 'q';
            break;
        case 'b':
            str[i] = 'p';
            break;
        case 'q':
            str[i] = 'd';
            break;
        case 'p':
            str[i] = 'b';
            break;
        }
    }
}

void leftright(int n, char *str)
{
    for (int i = 0; i < n; i++)
    {
        switch (str[i])
        {
        case 'd':
            str[i] = 'b';
            break;
        case 'b':
            str[i] = 'd';
            break;
        case 'q':
            str[i] = 'p';
            break;
        case 'p':
            str[i] = 'q';
            break;
        }
    }
}