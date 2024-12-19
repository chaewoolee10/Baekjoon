//10872
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    int fec = 1;

    for(int i = 1; i <= n; i++)
    {
        fec *= i;
    }
    printf("%d\n", fec);
}
