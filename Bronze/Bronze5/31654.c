//31654
#include <stdio.h>

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    
    int answer = a + b;
    int c; scanf("%d", &c);
    if(answer == c)
    {
        printf("correct!");
    }
    else
    {
        printf("wrong!");
    }
}