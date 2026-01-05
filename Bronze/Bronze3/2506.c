//2506
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int sum = 0;
    int score = 0;
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        if(a == 1)
        {
            score++;
            sum += score;
        }
        else
        {
            score = 0;
        }
    }
    printf("%d", sum);
}