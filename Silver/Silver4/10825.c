//10825
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[12];
    int kor;
    int eng;
    int math;
}STUDENT;

STUDENT arr[100005] = {};

int compare_1(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
        scanf("%d", &arr[i].kor);
        scanf("%d", &arr[i].eng);
        scanf("%d", &arr[i].math);
    }
    qsort(arr, n, sizeof(arr[0]), compare_1);
    
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i].name);
        
    }
}
int compare_1(const void *a, const void *b)
{
    const STUDENT *pa = (const STUDENT *)a;
    const STUDENT *pb = (const STUDENT *)b;
    
    if(pa->kor > pb->kor)
    {
        return -1;
    }
    else if(pa->kor < pb->kor)
    {
        return 1;
    }
    else
    {
        if(pa->eng > pb->eng)
        {
            return 1;
        }
        else if(pa->eng < pb->eng)
        {
            return -1;
        }
        else
        {
            if(pa->math > pb->math)
            {
                return -1;
            }
            else if(pa->math < pb->math)
            {
                return 1;
            }
            else
            {
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
        }
    }
    
}
