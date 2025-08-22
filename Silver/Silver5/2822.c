//2822
#include <stdio.h>
#include <stdlib.h>

typedef struct problem
{
    int score;
    int seq;
}PROBLEM;

int compare_score(const void *a, const void *b);
int compare_seq(const void *a, const void *b);

int main()
{
    PROBLEM arr[8] = {};
    PROBLEM arr2[5] = {};
    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i].score);
        arr[i].seq = i + 1;
    }
    qsort(arr, 8, sizeof(arr[0]), compare_score);
    
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i].score;
        arr2[i].seq = arr[i].seq;
    }
    printf("%d\n", sum);
    qsort(arr2, 5, sizeof(arr2[0]), compare_seq);
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i].seq);
    }
    
}
int compare_score(const void *a, const void *b)
{
    const PROBLEM *pa = (const PROBLEM *)a;
    const PROBLEM *pb = (const PROBLEM *)b;
    
    if(pa->score < pb->score)
    {
        return 1;
    }
    else if(pa->score > pb->score)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int compare_seq(const void *a, const void *b)
{
    const PROBLEM *pa = (const PROBLEM *)a;
    const PROBLEM *pb = (const PROBLEM *)b;
    
    if(pa->seq > pb->seq)
    {
        return 1;
    }
    else if(pa->seq < pb->seq)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}