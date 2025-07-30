//10816
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
int binarysearch_back(int n, int target);
int binarysearch_front(int n, int target);

int arr[500005] = {};
int count[500005] = {};

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    int m; scanf("%d", &m);
    
    for(int i = 0; i < m; i++)
    {
        int a; scanf("%d", &a);
        int front = binarysearch_front(n, a);
        int back = binarysearch_back(n, a);
        
        if(back == front && front == -1)
        {
            count[i] = 0;
        }
        else
        {
            count[i] = back - front + 1;
        }
    }
    for(int i = 0; i < m; i++)
    {
        printf("%d ", count[i]);
    }
    
}

int compare(const void *a, const void *b)
{
    const int *pa = (const int *)a;
    const int *pb = (const int *)b;
    
    if(*pa > *pb)
    {
        return 1;
    }
    else if(*pa < *pb)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
int binarysearch_back(int n, int target)
{
    int front = 0;
    int back = n - 1;
    
    while(1)
    {
        int back_addr = (front + back) / 2;
        //printf("searching back, target = %d, arr[back_addr] = %d, back_addr = %d\n", target, arr[back_addr], back_addr);
        if(arr[back_addr] == target && (arr[back_addr + 1] > target || back_addr == n - 1))
        {
            return back_addr;
        }
        else if(arr[back_addr] == target)
        {
            front = back_addr + 1;
        }
        if(front > back)
        {
            return -1;
        }
        if(arr[back_addr] > target)
        {
            back = back_addr - 1;   
        }
        else if(arr[back_addr] < target)
        {
            front = back_addr + 1;
        }
    }
}
int binarysearch_front(int n, int target)
{
    int front = 0;
    int back = n - 1;
    
    while(1)
    {
        int front_addr = (front + back) / 2;
        //printf("searching front, target = %d, arr[front_addr] = %d, front_addr = %d\n", target, arr[front_addr], front_addr);
        if(arr[front_addr] == target && (arr[front_addr - 1] < target || front_addr == 0))
        {
            return front_addr;
        }
        else if(arr[front_addr] == target)
        {
            back = front_addr - 1;
        }
        if(front > back)
        {
            return -1;
        }
        if(arr[front_addr] > target)
        {
            back = front_addr - 1;   
        }
        else if(arr[front_addr] < target)
        {
            front = front_addr + 1;
        }
    }
}