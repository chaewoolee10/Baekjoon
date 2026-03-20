// 1755
/*
    
eight five four nine one seven six three two zero
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int num;
    char str_sort[15];
} num;

void num_to_char(char *str, int n);
int compare(const void *a, const void *b);

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    num arr[100] = {};
    int idx = 0;
    for (int i = n; i <= m; i++)
    {
        arr[idx].num = i;
        char num_first[7] = {};
        num_to_char(num_first, i % 10);
        char num_last[7] = {};
        num_to_char(num_last, i / 10);
        if(i < 10) 
        {
            strcat(arr[idx].str_sort, num_first);
            idx++;
            continue;
        }
        strcpy(arr[idx].str_sort, num_last);
        strcat(arr[idx].str_sort, num_first);
        idx++;
    }
    qsort(arr, m - n + 1, sizeof(arr[0]), compare);
    for (int i = 0; i <= m - n; i++)
    {
        printf("%d ", arr[i].num);
        if(i % 10 == 9)
        {
            printf("\n");
        }
    }
}
void num_to_char(char *str, int n)
{
    switch (n)
    {
    case 0:
        strcpy(str, "zero");
        break;
    case 1:
        strcpy(str, "one");
        break;
    case 2:
        strcpy(str, "two");
        break;
    case 3:
        strcpy(str, "three");
        break;
    case 4:
        strcpy(str, "four");
        break;
    case 5:
        strcpy(str, "five");
        break;
    case 6:
        strcpy(str, "six");
        break;
    case 7:
        strcpy(str, "seven");
        break;
    case 8:
        strcpy(str, "eight");
        break;
    case 9:
        strcpy(str, "nine");
        break;
    }
}
int compare(const void *a, const void *b)
{
    const num *pa = (const num *)a;
    const num *pb = (const num *)b;

    if (strcmp(pa->str_sort, pb->str_sort) > 0)
    {
        return 1;
    }
    else if (strcmp(pa->str_sort, pb->str_sort) < 0)
    {
        return -1;
    }
    else
    {
       return 0;
    }
}