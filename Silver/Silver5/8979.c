// 8979
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num;
    int gold;
    int silver;
    int bronze;
    int rank;
} country;

int compare(const void *a, const void *b);

int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);

    country arr[1003] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].num);
        scanf("%d", &arr[i].gold);
        scanf("%d", &arr[i].silver);
        scanf("%d", &arr[i].bronze);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    int rank_idx = 1;
    arr[0].rank = 1;
    for (int i = 1; i < n; i++)
    {
        rank_idx++;
        if (arr[i].gold == arr[i - 1].gold &&
            arr[i].silver == arr[i - 1].silver &&
            arr[i].bronze == arr[i - 1].bronze)
        {
            arr[i].rank = arr[i - 1].rank;
        }
        else
        {
            arr[i].rank = rank_idx;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(k == arr[i].num)
        {
            printf("%d", arr[i].rank);
            break;
        }
    }
}
int compare(const void *a, const void *b)
{
    const country *pa = (const country *)a;
    const country *pb = (const country *)b;

    if (pa->gold < pb->gold)
    {
        return 1;
    }
    else if (pa->gold > pb->gold)
    {
        return -1;
    }
    else
    {
        if (pa->silver < pb->silver)
        {
            return 1;
        }
        else if (pa->silver > pb->silver)
        {
            return -1;
        }
        else
        {
            if (pa->bronze < pb->bronze)
            {
                return 1;
            }
            else if (pa->bronze > pb->bronze)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
    }
}
