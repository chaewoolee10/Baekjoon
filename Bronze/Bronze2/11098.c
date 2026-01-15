//11098
#include <stdio.h>
typedef struct {
    int price;
    char name[25];
}player;

void football();

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        football();
    }
}

void football()
{
    int n; scanf("%d", &n);
    player arr[104] = {};
    int max = 0;
    int maxidx = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].price);
        getchar();
        scanf("%s", arr[i].name);
        if(max < arr[i].price)
        {
            max = arr[i].price;
            maxidx = i;
        }
    }
    printf("%s\n", arr[maxidx].name);
}