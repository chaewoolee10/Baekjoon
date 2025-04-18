//7568
#include <stdio.h>

typedef struct people
{
    int weight;
    int height;
}PEOPLE;

PEOPLE arr[50] = {};

int ratingfunc(PEOPLE *arr, int targetidx, int n);

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].weight, &arr[i].height);
    }
    
    int rating[50] = {};
    
    for(int i = 0; i < n; i++)
    {
        rating[i] = ratingfunc(arr, i, n);
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", rating[i]);
    }
}

int ratingfunc(PEOPLE *arr, int targetidx, int n)
{
    int count = 1;
    
    for(int i = 0; i < n; i++)
    {
        if(i == targetidx)
        {
            continue;
        }
        else
        {
            if(arr[targetidx].height < arr[i].height && arr[targetidx].weight < arr[i].weight)
            {
                count++;
            }
        }
    }
    return count;
}