// 5635
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[17];
    int year;
    int month;
    int day;
} birthday;

int compare(const void *a, const void *b);

int main()
{
    birthday arr[100] = {};
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].day);
        scanf("%d", &arr[i].month);
        scanf("%d", &arr[i].year);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    printf("%s\n", arr[n - 1].name);
    printf("%s\n", arr[0].name);
    
}

int compare(const void *a, const void *b)
{
    const birthday *pa = (const birthday *)a;
    const birthday *pb = (const birthday *)b;

    if (pa->year < pb->year)
    {
        return -1;
    }
    else if (pa->year > pb->year)
    {
        return 1;
    }
    else
    {
        if (pa->month < pb->month)
        {
            return -1;
        }
        else if (pa->month > pb->month)
        {
            return 1;
        }
        else
        {
            if (pa->day < pb->day)
            {
                return -1;
            }
            else if (pa->day > pb->day)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}