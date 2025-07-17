//17219
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct password
{
    char website[22];
    char psw[22];
}PASSWORD;

int compare(const void *a, const void *b);
void binarysearch(PASSWORD *arr, char *target, int n);

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    PASSWORD arr[100000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].website);
        scanf("%s", arr[i].psw);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < m; i++)
    {
        char str[22] = {};
        scanf("%s", str);
        binarysearch(arr, str, n);
    }
    
}
int compare(const void *a, const void *b)
{
    const PASSWORD *pa = (const PASSWORD *)a;
    const PASSWORD *pb = (const PASSWORD *)b;
    
    if(strcmp(pa->website, pb->website) < 0)
    {
        return -1;
    }
    else if(strcmp(pa->website, pb->website) > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void binarysearch(PASSWORD *arr, char *target, int n)
{
    int head = n - 1;
    int tail = 0;
    while(1)
    {
        int mid = (head + tail) / 2;
        if(head < tail)
        {
            break;
        }
        if(strcmp(arr[mid].website, target) > 0)
        {
            head = mid - 1;
        }
        if(strcmp(arr[mid].website, target) < 0)
        {
            tail = mid + 1;
        }
        if((!strcmp(arr[mid].website, target)) == 1)
        {
            printf("%s\n", arr[mid].psw);
            break;
        }
    }
}