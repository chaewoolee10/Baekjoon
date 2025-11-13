//23811
#include <stdio.h>

void horizon(int n);
void vertical(int n);

int main()
{
    int n; scanf("%d", &n);
    horizon(n);
    vertical(n);
    horizon(n);
    vertical(n);
    horizon(n);
}
void horizon(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n * 5; j++)
        {
            printf("@");
        }
        printf("\n");
    }
}
void vertical(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("@");
        }
        printf("\n");
    }
}