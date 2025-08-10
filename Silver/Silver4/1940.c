// 1940
#include <stdio.h>

int numarr[100005] = {};

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        numarr[a]++;
    }

    int count = 0;
    if (m > 200001)
    {
        printf("0");
    }
    else
    {
        for (int i = 1; i < 100005; i++)
        {
            if (m - i >= 0 && m - i != i)
            {
                if (numarr[i] == 1 && numarr[m - i] == 1)
                {
                    count++;
                    numarr[i]--;
                    numarr[m - i]--;
                }
            }
        }
        printf("%d", count);
    }
}