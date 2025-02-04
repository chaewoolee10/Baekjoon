//30007
#include <stdio.h>

int main()
{
   int n; scanf("%d", &n);
   
   for(int i = 0; i < n; i++)
   {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);
        int x; scanf("%d", &x);
        
        printf("%d\n", a * (x - 1) + b);
   }
}