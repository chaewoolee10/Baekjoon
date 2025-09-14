#include <stdio.h>

int arr[100003] = {};

int desccount(int n);
int asccount(int n);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int desc = desccount(n);
    int asc = asccount(n);

    desc < asc ? printf("%d", asc) : printf("%d", desc);
}
int desccount(int n)
{
    int count = 1;
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] <= arr[i])
        {
            count++;
        }
        else
        {
            if (max < count)
            {
                max = count;
            }
            count = 1;
        }
    }
    if (max < count)
    {
        max = count;
    }
    return max;
}
int asccount(int n)
{
    int count = 1;
    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] >= arr[i])
        {
            count++;
        }
        else
        {
            if (max < count)
            {
                max = count;
            }
            count = 1;
        }
    }
    if (max < count)
    {
        max = count;
    }
    return max;
}
