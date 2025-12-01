// 27918
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int d = 0;
    int p = 0;

    for (int i = 0; i < n; i++)
    {
        char c;
        scanf("%c", &c);
        getchar();
        if (d - p == 2 || p - d == 2)
        {
            continue;
        }
        else
        {
            if (c == 'D')
            {
                d++;
            }
            else
            {
                p++;
            }
        }
    }
    printf("%d:%d", d, p);
}