//34052
#include <stdio.h>

int main()
{
    int sum = 0;
    for(int i = 0; i < 4; i++)
    {
        int a; scanf("%d", &a);
        sum += a;
    }
    sum += 300;
    sum > 1800 ? printf("No") : printf("Yes");
}