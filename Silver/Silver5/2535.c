//2535
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int country;
    int score;
    int num;
}student;

int compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    student arr[105] = {};
    int count_arr[105] = {};
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &arr[i].country, &arr[i].num, &arr[i].score);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < n; i++)
    {
        if(count_arr[arr[i].country] < 2)
        {
            printf("%d %d\n", arr[i].country, arr[i].num);
            count++;
            count_arr[arr[i].country]++;
        }
        if(count == 3)
        {
            break;
        }
    }
    
}
int compare(const void *a, const void *b)
{
    const student *pa = (const student *)a;
    const student *pb = (const student *)b;
    
    if(pa->score > pb->score)
    {
        return -1;
    }
    else if(pa->score < pb->score)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}