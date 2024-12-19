//10814
#include <stdio.h>

struct member
{
    int age;
    char name[101];
};
struct member arr[100000];

int main()
{
    
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].age);
        scanf("%s", arr[i].name);
    }
    for(int i = 1; i <= 200; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j].age == i)
            {
                printf("%d %s\n",arr[j].age, arr[j].name);
            }
        }
    }
}