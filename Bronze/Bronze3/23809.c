//23809
#include <stdio.h>

void top_and_bot_1(int n);
void top_and_bot_2(int n);
void mid(int n);

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        top_and_bot_1(n);
    }
    for(int i = 0; i < n; i++)
    {
        top_and_bot_2(n);
    }
    mid(n);
    for(int i = 0; i < n; i++)
    {
        top_and_bot_2(n);
    }
    for(int i = 0; i < n; i++)
    {
        top_and_bot_1(n);
    }
}
void top_and_bot_1(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("@");
    }
    for(int i = 0; i < 3 * n; i++)
    {
        printf(" ");
    }
    for(int i = 0; i < n; i++)
    {
        printf("@");
    }
    printf("\n");
}
void top_and_bot_2(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("@");
    }
    for(int i = 0; i < 2 * n; i++)
    {
        printf(" ");
    }
    for(int i = 0; i < n; i++)
    {
        printf("@");
    }
    printf("\n");
}
void mid(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < 3 * n; i++)
        {
            printf("@");
        }
        printf("\n");
    }
    
}