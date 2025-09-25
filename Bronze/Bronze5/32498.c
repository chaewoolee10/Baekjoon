//32498
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        if(a % 2 == 1 && a != 0)
        {
            count++;
        }
    }
    printf("%d", count);
}