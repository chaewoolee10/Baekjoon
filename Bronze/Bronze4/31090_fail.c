//31090
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int num = a % 100;
        a++;
        if(a % num == 0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bye\n");
        }
    }
}