//1620
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct POKETMON
{
    int num;
    char name[21];
    
} poketmon;

int compare(const void *a, const void *b);
int binarysearch(poketmon *arr, char *target, int n);
void poketprint(poketmon *arr, poketmon *numarr, int n);

poketmon arr[100005];
poketmon numarr[100005];

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
        arr[i].num = i + 1;
        
        strcpy(numarr[i].name, arr[i].name);
        numarr[i].num = arr[i].num;
    }   
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < m; i++)
    {
        poketprint(arr, numarr, n);       
    }
    
}

void poketprint(poketmon *arr, poketmon *numarr, int n)
{
    char input[21] = {};
    scanf("%s", input);
    
    int intinput = atoi(input);
    
    if(intinput != 0)
    {
        printf("%s\n", numarr[intinput - 1].name);
    }
    else
    {
        int targetidx = binarysearch(arr, input, n);
        printf("%d\n", arr[targetidx].num);
    }
}

int compare(const void *a, const void *b)
{
    const poketmon *pa = (const poketmon *)a;
    const poketmon *pb = (const poketmon *)b;
    
    if(strcmp(pa->name, pb->name) > 0)
    {
        return 1;
    }
    else if(strcmp(pa->name, pb->name) < 0)
    {
        return -1;
    }
    else 
    {
        return 0;
    }
}
int binarysearch(poketmon *arr, char *target, int n)
{
    int first = 0;
    int last = n - 1;
    
    while(1)
    {
        int mid = (first + last) / 2;
        if(!strcmp(arr[mid].name, target))
        {
            return mid;
        }
        if(first > last)
        {
            return 0;
        }
        if(strcmp(arr[mid].name, target) < 0)
        {
            first = mid + 1;
        }
        else if(strcmp(arr[mid].name, target) > 0)
        {
            last = mid - 1;
        }
    }
}