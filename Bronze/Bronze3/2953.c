//2953
#include <stdio.h>

int main()
{
    int max = 0;
    int idx = 0;
    for(int i = 0; i < 5; i++)
    {
        int sum = 0;
        for(int j = 0; j < 4; j++)
        {
            int a; scanf("%d", &a);
            sum += a;
        }
        if(max < sum)
        {
            max = sum;
            idx = i + 1;
        }
    }
    printf("%d %d",idx,max);
}