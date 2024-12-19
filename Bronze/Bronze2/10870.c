#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    int Fibo[25] = {0};
    Fibo[0] = 0; Fibo[1] = 1;

    for(int i = 2; i < 25; i++)
    {
        Fibo[i] = Fibo[i-1] + Fibo[i-2];
    }
    printf("%d\n", Fibo[n]);
}