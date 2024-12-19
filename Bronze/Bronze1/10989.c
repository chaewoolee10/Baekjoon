//10989
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int duparr[10000];
    int num;
    for(int i = 0; i < 10000; i++)
    {
        duparr[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        duparr[num-1]++;
    }

    for(int i = 0; i < 10000; i++)
    {
        if(duparr[i] != 0)
        {
            for(int j = 0; j < duparr[i]; j++)
            {
                printf("%d\n", i+1);
            }
        }
    }
}
