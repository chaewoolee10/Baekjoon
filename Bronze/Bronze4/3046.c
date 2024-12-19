//3046
#include <stdio.h>

int main()
{
    int r1; scanf("%d", &r1); 
    int s;  scanf("%d", &s);
    //(r1 + r2)/2 = s, r1 + r2 = 2s, r2 = 2s - r1;
    int r2 = 2 * s - r1; 
    
    printf("%d", r2);
}