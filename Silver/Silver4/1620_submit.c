#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct POCKETMON
{
    int num;
    char name[21];
}pocketmon;

void pocketprint(pocketmon *arr, int n);

pocketmon arr[100005];

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
    }   

    for(int i = 0; i < m; i++)
    {
        pocketprint(arr, n);       
    }
    
}

void pocketprint(pocketmon *arr,int n)
{
    
    char input[21] = {};
    scanf("%s", input);
    
    int intinput = atoi(input);
    if(intinput != 0)
    {
        printf("%s\n", arr[intinput - 1].name);
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(!strcmp(input, arr[i].name))
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
}