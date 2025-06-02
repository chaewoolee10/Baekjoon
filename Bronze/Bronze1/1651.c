// 1651
#include <stdio.h>
#include <string.h>

void strtoarr(int n, int *arr, char *str);
void arrcpy(int n, int *arr, int *newarr);

int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);

    int arr[20] = {};
    char str[100] = {};
    scanf("%s", str);
    strtoarr(n, arr, str);
    
    int newarr[20] = {};
    arrcpy(n, arr, newarr);

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            newarr[j] = newarr[j + 1] - arr[j];
        }
        n--;
        arrcpy(n, newarr, arr);
    }

    for (int l = 0; l < n - 1; l++)
    {
        printf("%d,", arr[l]);
    }
    printf("%d", arr[n - 1]);
}
void strtoarr(int n, int *arr, char *str)
{
    int length = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        int minus = 1;
        if (str[j] == '-')
        {
            minus = -1;
            j++;
        }

        int num = str[j] - '0';
        int ten = 10;
        int numlength = 0;
        while (1)
        {
            if(str[j + numlength] == ',' || j + numlength == length)
            {
                break;
            }
            numlength++;
        }
        for(int k = 0; k < numlength - 1; k++)
        {
            num *= ten;
            num += str[j + numlength - 1] - '0';
        }
        
        num *= minus;
        arr[i] = num;
        j += numlength + 1;
    }
}
void arrcpy(int n, int *arr, int *newarr)
{
    for (int i = 0; i < n; i++)
    {
        newarr[i] = arr[i];
    }
}