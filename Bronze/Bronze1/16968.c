// 16968
/*
#include <stdio.h>
#include <string.h>

int checker(int length, int *arr);

int main()
{
    char str[5] = {}; scanf("%s", str);
    int length = strlen(str);

    int arr[4] = {};
    int start_arr[4] = {};
    int end_arr[4] = {};
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] == 'd')
        {
            start_arr[i] = 1;
            end_arr[i] = 10;
        }
        if (str[i] == 'c')
        {
            start_arr[i] = 'a';
            end_arr[i] = 'z';
        }
    }
    for (int i = start_arr[0]; i <= end_arr[0]; i++)
    {
        arr[0] = i;
        if (length >= 2)
        {
            for (int j = start_arr[1]; j <= end_arr[1]; j++)
            {
                arr[1] = j;
                if (length >= 3)
                {
                    for (int k = start_arr[2]; k <= end_arr[2]; k++)
                    {
                        arr[2] = k;
                        if (length >= 4)
                        {
                            for (int l = start_arr[3]; l <= end_arr[3]; l++)
                            {
                                arr[3] = l;
                                count += checker(length, arr);
                            }
                        }
                        else
                        {
                            count += checker(length, arr);
                        }
                    }
                }
                else
                {
                    count += checker(length, arr);
                }
            }
        }
        else
        {
            count += checker(length, arr);
        }
    }
    printf("%d", count);
}
int checker(int length, int *arr)
{
    for(int i = 0; i < length - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[5] = {}; scanf("%s", str);
    int length = strlen(str);
    int arr[4] = {};
    int count = 1;
    for(int i = 0; i < length; i++)
    {
        arr[i] = str[i] == 'd' ? 10 : 'z' - 'a' + 1;
        
        int a = arr[i];
        if(i != 0 && arr[i] == arr[i - 1])
        {
            a--;
        }
        count *= a;
    }
    printf("%d", count);
}