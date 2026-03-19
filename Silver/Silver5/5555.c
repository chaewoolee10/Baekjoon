// 5555
/*
#include <stdio.h>
#include <string.h>

int checker(char *target, char *str);

int main()
{
    char target[15] = {};
    scanf("%s", target);
    getchar();
    int n;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        char str[15] = {};
        scanf("%s", str);
        // getchar();
        count += checker(target, str);
    }
    printf("%d", count);
}
int checker(char *target, char *str)
{
    for (int start = 0; start < 10; start++)
    {
        int count = 0;
        int len = strlen(target);
        int idx = start;
        while (1)
        {

            if (str[idx] == target[count])
            {
                count++;
                if (count == len)
                {
                    return 1;
                }
            }
            else
            {
                count = 0;
            }
            idx++;
            idx %= 10;
            if (idx == start)
            {
                break;
            }
        }
    }
    return 0;
}
    */
#include <stdio.h>
#include <string.h>

int main()
{
    char target[14] = {}; scanf("%s", target);
    getchar();
    int n; scanf("%d", &n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        char str[14] = {}; scanf("%s", str);
        char str_doubled[34] = {};
        strcpy(str_doubled, str);
        strcat(str_doubled, str);
        
        count += strstr(str_doubled, target) ? 1 : 0;
    }
    printf("%d", count);
}