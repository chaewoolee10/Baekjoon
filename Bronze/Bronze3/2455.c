#include <stdio.h>

int main()
{
    int max = 0;
    int cur = 0;
    for(int i = 0; i < 4; i++)
    {
        int in, out; scanf("%d %d", &out, &in);
        cur += in - out;
        if(cur > max)
        {
            max = cur;
        }
    }
    printf("%d", max);
}