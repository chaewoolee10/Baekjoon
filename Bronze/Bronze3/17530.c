//17530
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int Carlos; scanf("%d", &Carlos);
    int check = 1;
    
    for(int i = 1; i < n; i++)
    {
        int a; scanf("%d", &a);
        if(Carlos < a)
        {
            check = 0;
        }
    }
    check == 1 ? printf("S") : printf("N");
    
    
}