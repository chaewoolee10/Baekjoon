//22966
#include <stdio.h>

typedef struct {
    char name[13];
    int diffi;
}problem;

int main()
{
    int n; scanf("%d", &n);
    problem arr[5] = {};
    int min = 0;
    int minidx = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
        getchar();
        scanf("%d", &arr[i].diffi);
        if(min == 0)
        {
            min = arr[i].diffi;
            minidx = i;
        }
        if(arr[i].diffi < min)
        {
            min = arr[i].diffi;
            minidx = i;
        }
    }
    printf("%s", arr[minidx].name);
    
}