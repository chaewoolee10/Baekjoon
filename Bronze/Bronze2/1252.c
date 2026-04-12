//1252
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[85] = {}; scanf("%s", str1);
    char str2[85] = {}; scanf("%s", str2);

    int res[85] = {};

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    
    int start = str1_len > str2_len ? 1 : 2;

    if(start == 1)
    {
        int len = str1_len;
        for(int i = 84; i > 84 - len; i--)
        {
            if(str2_len > 0) res[i] += (str2[str2_len - 1] - '0');
            res[i] += (str1[str1_len - 1] - '0');
            res[i - 1] += res[i] / 2;
            res[i] %= 2;
            str1_len--;
            str2_len--;
        }
    }
    else
    {
        int len = str2_len;
        for(int i = 84; i > 84 - len; i--)
        {
            if(str1_len > 0) res[i] += (str1[str1_len - 1] - '0');
            res[i] += (str2[str2_len - 1] - '0');
            res[i - 1] += res[i] / 2;
            res[i] %= 2;
            str1_len--;
            str2_len--;
        }
    }
    int checker = 0;
    for(int i = 0; i < 85; i++)
    {
        if(res[i] == 1)
        {
            checker = 1;
        }
        if(checker == 1) printf("%d", res[i]);
        if(i == 84 && checker == 0) printf("0");
    }
}