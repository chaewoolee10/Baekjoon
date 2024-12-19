//2292
#include <stdio.h>

int main()
{
    //1 -> 1
    //2~7 -> 2 6개 +6 = 12
    //8~19 -> 3 12개 +6 = 18
    //20~37 -> 4 18개 +6 = 24
    //38~61 -> 5 24개

    long int n; scanf("%ld", &n);
    int count = 1;
    int location = 1;
    int mul = 1;
    while (n - location > 0)
    {
        n -= location;
        count++;
        location = 6 * mul;
        mul++;
        //printf("%d %d\n", n, location);
    }

    printf("%d\n", count);
    
}