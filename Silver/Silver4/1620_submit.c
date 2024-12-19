#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct POCKETMON
{
    int num;
    char name[25];
}pocketmon;

void pocketprint(pocketmon *arr, char *input, int n);

pocketmon arr[100005];

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].name);
    }   
    
    char input[25] = {};
    
    for(int i = 0; i < m; i++)
    {
        scanf("%s", input);
        pocketprint(arr, input, n);       
    }
    
}

void pocketprint(pocketmon *arr, char *input, int n)
{
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