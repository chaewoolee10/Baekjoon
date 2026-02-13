// 1417
#include <stdio.h>
#include <stdlib.h>
/*
typedef struct
{
    int num;
    int ticket;
} candi;
 int find_dasom(candi *arr, int n);
int main()
{
    int n;
    scanf("%d", &n);
    candi arr[50] = {};
    int dup_check = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].ticket);
        arr[i].num = i + 1;
        if(i != 0 && arr[0].ticket == arr[i].ticket)
        {
            dup_check = 1;
        }
    }
    qsort(arr, n, sizeof(arr[0]), compare); // 처음 정렬
    int count = 0;
    if(dup_check && arr[0].num == 1)
    {
        count++;
        arr[0].ticket += 1;
        arr[1].ticket -= 1;
    }
    while (1)
    {
        if (arr[0].num == 1)
        {
            break;
        }
        else
        {
            int dasom_idx = find_dasom(arr, n);
            arr[dasom_idx].ticket += 1;
            arr[0].ticket -= 1;
            count++;
            qsort(arr, n, sizeof(arr[0]), compare);
        }
    }
    printf("%d", count);
}
int find_dasom(candi *arr, int n)
{
    int dasom = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].num == 1)
        {
            dasom = i;
        }
    }
    return dasom;
}
*/

int compare(const void *a, const void *b);
int main()
{
    int n; scanf("%d", &n);
    int dasom; scanf("%d", &dasom);
    int candi[50] = {};
    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &candi[i]);
    }
    qsort(candi, n - 1, sizeof(candi[0]), compare);
    int count = 0;
    while (1)
    {
        if(n == 1 || dasom > candi[0])
        {
            break;
        }
        else
        {
            dasom++;
            candi[0]--;
            count++;
        }
        qsort(candi, n - 1, sizeof(candi[0]), compare);
    }
    printf("%d", count);
}
int compare(const void *a, const void *b)
{
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;
    
    if(*pa > *pb)
    {
        return -1;
    }
    else if(*pa < *pb)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
