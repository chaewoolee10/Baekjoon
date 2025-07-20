// 18870
#include <stdio.h>
#include <stdlib.h>

int compare1(const void *a, const void *b);
int compare2(const void *a, const void *b);

typedef struct arrstruct
{
    int num;
    int address;
    int new_num;
} ARRSTRUCT;

ARRSTRUCT arr[1000003] = {};
ARRSTRUCT arr2[1000003] = {};

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].num);
        arr[i].address = i;
    }
    qsort(arr, n, sizeof(arr[0]), compare1);

    arr[0].new_num = 0;
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].num == arr[i - 1].num)
        {
            arr[i].new_num = arr[i - 1].new_num;
        }
        else
        {
            k++;
            arr[i].new_num = k;
            
        }
    }
    qsort(arr, n, sizeof(arr[0]), compare2);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i].new_num);
    }
}

int compare1(const void *a, const void *b)
{
    const ARRSTRUCT *pa = (const ARRSTRUCT *)a;
    const ARRSTRUCT *pb = (const ARRSTRUCT *)b;

    if (pa->num > pb->num)
    {
        return 1;
    }
    else if (pa->num < pb->num)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int compare2(const void *a, const void *b)
{
    const ARRSTRUCT *pa = (const ARRSTRUCT *)a;
    const ARRSTRUCT *pb = (const ARRSTRUCT *)b;
    
    if(pa->address > pb->address)
    {
        return 1;
    }
    else if(pa->address < pb->address)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    
}