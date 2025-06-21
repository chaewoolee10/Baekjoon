// 1439
#include <stdio.h>
#include <string.h>

void strtoarr(char *str, int *arr, int length);
int count_arr(int *arr, int length, int ref);

char str[1000000] = {};
int arr[1000000] = {};

int main()
{
    scanf("%s", str);
    int length = strlen(str);
    strtoarr(str, arr, length);
    int zerocount = count_arr(arr, length, 0);
    int onecount = count_arr(arr, length, 1);
    
    zerocount < onecount ? printf("%d", zerocount) : printf("%d", onecount);
}

void strtoarr(char *str, int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = str[i] - '0';
    }
}

int count_arr(int *arr, int length, int ref)
{
    int criteria = 0;
    int crit_count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != ref)
        {
            continue;
        }
        else
        {
            crit_count++;
            for (int j = i; j < length; j++)
            {
                if (arr[j] != ref || j == length - 1)
                {
                    criteria++;
                    i = j + 1;
                    break;
                }
            }
        }
    }
    if(crit_count == length)
    {
        criteria = 1;
    }
    return criteria;
}