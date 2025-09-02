//5800
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int gapfunction(int *arr, int n);

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int student; scanf("%d", &student);
        int arr[55] = {};
        for(int j = 0; j < student; j++)
        {
            scanf("%d", &arr[j]);
        }
        qsort(arr, student, sizeof(arr[0]), compare);
        int max = arr[0];
        int min = arr[student - 1];
        int Lgap = gapfunction(arr, student);
        printf("Class %d\n", i + 1);
        printf("Max %d, Min %d, Largest gap %d\n", max, min, Lgap);
    }
    
    
}
int compare(const void *a, const void *b)
{
    const int *pa = (const int *)a;   
    const int *pb = (const int *)b;
    
    if(*pa < *pb)
    {
        return 1;
    }
    else if(*pa > *pb)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int gapfunction(int *arr, int n)
{
    int max = 0;
    for(int i = 1; i < n; i++)
    {
        if(max < arr[i - 1] - arr[i])
        {
            max = arr[i - 1] - arr[i];
        }
    }
    return max;
}