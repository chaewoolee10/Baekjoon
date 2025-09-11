// 1235
#include <stdio.h>
#include <string.h>

char str[1003][105] = {};

int stringcompare(int k, char *str1, char *str2);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    int length = strlen(str[0]);

    for (int i = 0; i < length; i++)
    {
        int dup = 0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (stringcompare(length - i, str[j], str[k]) == 1)
                {
                    dup = 1;
                    break;
                }
            }
            if (dup == 1)
            {
                break;
            }
        }
        if (dup == 0)
        {
            printf("%d", i + 1);
            break;
        }
    }
}
int stringcompare(int k, char *str1, char *str2)
{
    int result = 1;
    int arr1[1003] = {};
    int arr2[1003] = {};
    int length = strlen(str1);
    int j = 0;
    for(int i = k - 1; i < length; i++)
    {
        arr1[j] = str1[i] - '0';
        arr2[j] = str2[i] - '0';
        j++;
    }
    for(int i = 0; i < j; i++)
    {
        if(arr1[i] != arr2[i])
        {
            result = 0;   
        }
    }
    return result;
}