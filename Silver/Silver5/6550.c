// 6550
#include <stdio.h>
#include <string.h>

char str1[100005] = {};
char str2[100005] = {};

int main()
{
    while (scanf("%s %s", str1, str2) != EOF)
    {
        int str1_len = strlen(str1);
        int str2_len = strlen(str2);
        int str1_idx = 0;
        for (int i = 0; i < str2_len; i++)
        {
            //printf("%c %c\n", str2[i], str1[str1_idx]);
            if (str2[i] == str1[str1_idx])
            {
                str1_idx++;
            }
        }
        str1_idx == str1_len ? printf("Yes\n") : printf("No\n");
        
    }
}