// 10824
#include <stdio.h>
#include <string.h>

void char_to_arr(char *str, int *arr);

int main()
{
    char a[20] = {};
    scanf("%s", a);
    char b[20] = {};
    scanf("%s", b);
    char c[20] = {};
    scanf("%s", c);
    char d[20] = {};
    scanf("%s", d);

    strcat(a, b);
    strcat(c, d);

    int a_arr[20] = {};
    char_to_arr(a, a_arr);
    int c_arr[20] = {};
    char_to_arr(c, c_arr);

    int len = strlen(a) > strlen(c) ? strlen(a) : strlen(c);

    int a_idx = strlen(a);
    int c_idx = strlen(c);

    int res_arr[20] = {};

    for (int i = 20 - 1; i >= 0; i--)
    {
        res_arr[i] += a_arr[i] + c_arr[i];
        if (res_arr[i] >= 10)
        {
            res_arr[i - 1]++;
            res_arr[i] -= 10;
        }
    }
    int start = 0;
    for (int i = 0; i < 20; i++)
    {
        if (res_arr[i] != 0 && start == 0)
        {
            start = 1;
        }
        if(start == 1) printf("%d", res_arr[i]);
    }
}
void char_to_arr(char *str, int *arr)
{
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        arr[19 - i] = str[len - i - 1] - '0';
    }
}