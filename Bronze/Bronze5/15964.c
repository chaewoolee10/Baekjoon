//15964
#include <stdio.h>

int main()
{
    long int a; scanf("%ld", &a);
    long int b; scanf("%ld", &b);

    long int c = (a+b) * (a-b); // a^2 - b^2

    printf("%ld\n", c);
    
}