//17219
#include <stdio.h>
#include <string.h>

typedef struct password
{
    char website[22];
    char psw[22];
}PASSWORD;

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    PASSWORD arr[100000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i].website);
        scanf("%s", arr[i].psw);
    }
    
    for(int i = 0; i < m; i++)
    {
        char str[22] = {};
        scanf("%s", str);
        for(int j = 0; j < n; j++)
        {
            if(!strcmp(str, arr[j].website))
            {
                printf("%s\n", arr[j].psw);
            }
        }
    }
    
}