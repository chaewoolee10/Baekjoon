//11651 modifying 11650
// 11650
#include <stdio.h>
#include <stdlib.h>

struct coordinate
{
    int x;
    int y;
};

int compare(const void *a, const void *b)
{
    struct coordinate *p1 = (struct coordinate *)a;
    struct coordinate *p2 = (struct coordinate *)b;
    
    if(p1->y == p2 -> y)
    {
        return (p1->x - p2->x);
    }
    else
    {
        return (p1->y - p2->y);
    }
}

struct coordinate arr[100000];

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr, n, sizeof(struct coordinate), compare);
    
    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
}