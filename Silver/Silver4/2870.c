// 2870
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_refine(char *str);
int compare(const void *a, const void *b);

int main()
{
    int n;
    scanf("%d", &n);
    char str[5003][103] = {};
    getchar();
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        char a[103] = {};
        scanf("%s", a);
        int a_len = strlen(a);
        int str_idx = 0;
        for (int j = 0; j < a_len; j++)
        {
            if (a[j] < 'a')
            {
                str[idx][str_idx] = a[j];
                str_idx++;
                if (a[j + 1] >= 'a')
                {
                    str[idx][str_idx] = '\0';
                    str_idx = 0;
                    idx++;
                }
            }
        }
        if (str_idx != 0)
        {
            idx++;
        }
    }
    for (int i = 0; i < idx; i++)
    {
        str_refine(str[i]);
    }
    qsort(str, idx, sizeof(str[0]), compare);
    for (int i = 0; i < idx; i++)
    {
        printf("%s\n",str[i]);
    }
}

void str_refine(char *str)
{
    int len = strlen(str);
    int zero = 0;
    int checker = 0;
    if (len > 1)
    {
        for (int j = 0; j < len; j++)
        {
            if(str[j] != '0') checker++;
            if (str[j] == '0' && checker == 0) zero++;
        }
    }
    if (len == zero) zero--;

    if (zero >= 1)
    {
        for (int i = 0; i < len - zero; i++)
        {
            str[i] = str[i + zero];
        }
        for (int i = len - zero; i < len; i++)
        {
            str[i] = '\0';
        }
    }
}
int compare(const void *a, const void *b)
{
    const char *pa = (const char *)a;
    const char *pb = (const char *)b;
    
    int pa_len = strlen(pa);
    int pb_len = strlen(pb);
    
    if(pa_len > pb_len)
    {
        return 1;
    }
    else if(pa_len < pb_len)
    {
        return -1;
    }
    else
    {
        return strcmp(pa, pb);
    }
}