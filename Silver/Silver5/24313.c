//24313
#include <stdio.h>

int main()
{
    int a_one; scanf("%d", &a_one);
    int a_zero; scanf("%d", &a_zero);
    int c; scanf("%d", &c);
    int n_zero; scanf("%d", &n_zero);
    
    int n = n_zero;
    int g_n = c * n;
    int f_n = a_one * n + a_zero;
    
    g_n - f_n >= 0 && c >= a_one ? printf("1") : printf("0");
    //(c - a1)n - a0 >= 0
}