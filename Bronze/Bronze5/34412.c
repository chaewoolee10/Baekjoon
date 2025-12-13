//34412
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    n += n >= 13 ? 1 : 0;
    printf("%d", n);
}