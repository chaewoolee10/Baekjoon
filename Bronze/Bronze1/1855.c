// 1855
#include <stdio.h>
#include <string.h>

int main()
{
    int k;
    scanf("%d", &k);
    getchar();
    char str[205] = {};
    scanf("%s", str);
    int length = strlen(str);
    char str2[20][23] = {};
    int idx = 0;
    for (int i = 0; i < length / k; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < k; j++)
            {
                str2[i][j] = str[idx];
                idx++;
            }
        }
        else
        {
            for (int j = k - 1; j >= 0; j--)
            {
                str2[i][j] = str[idx];
                idx++;
            }
        }
    }
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < length / k; j++)
        {
            printf("%c", str2[j][i]);
        }
    }
}