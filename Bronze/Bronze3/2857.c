// 2857
#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5] = {};
    int checker = 0;
    for (int i = 0; i < 5; i++)
    {
        char str[15] = {};
        scanf("%s", str);
        if (strstr(str, "FBI"))
        {
            arr[i]++;
            checker++;
        }
    }
    if (checker == 0)
        printf("HE GOT AWAY!");
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == 1)
                printf("%d ", i + 1);
        }
    }
}