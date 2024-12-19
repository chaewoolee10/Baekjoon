//20528
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    char str[101][101] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        getchar();
    }
    
    for(int i = 1; i < n; i++)
    {
        if(str[0][0] != str[i][0])
        {
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
       
}