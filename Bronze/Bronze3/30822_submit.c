//30822
#include <stdio.h>

void stringcheck(int *uospc, char *str, int n);

int main()
{
    int n; scanf("%d", &n);
    char str[1001] = {};
    scanf("%s", str);
    int uospc[5] = {};
    
    stringcheck(uospc, str, n);
    int min = uospc[0];
    
    for(int i = 1; i < 5; i++)
    {
        if(min > uospc[i])
        {
            min = uospc[i];
        }
    }
    printf("%d", min);
}

void stringcheck(int *uospc, char *str, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'u')
        {
            uospc[0]++;
        }
        if(str[i] == 'o')
        {
            uospc[1]++;
        }
        if(str[i] == 's')
        {
            uospc[2]++;
        }
        if(str[i] == 'p')
        {
            uospc[3]++;
        }
        if(str[i] == 'c')
        {
            uospc[4]++;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d", uospc[i]);
    }
    printf("\n");
}