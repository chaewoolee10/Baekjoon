//31090
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int b = a / 1000;
        b *= 10;
        int c = a % 10;
        int num = b + c;
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