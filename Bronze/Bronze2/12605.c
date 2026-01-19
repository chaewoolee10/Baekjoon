//12605
#include <stdio.h>

void gcd_lcm(int a, int b);
int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);
        
        gcd_lcm(a, b);
    }
}
void gcd_lcm(int a, int b)
{
    int gcd = 1;
    int lcm = 1;
    int max = a < b ? b : a;
    int min = a > b ? b : a;
    for(int i = 1; i <= max; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    int a_mul = 1;
    int b_mul = 1;
    while(1)
    {
        int a2 = a * a_mul;
        int b2 = b * b_mul;
        if(a2 < b2)
        {
            a_mul++;
        }
        else if(a2 > b2)
        {
            b_mul++;
        }
        else
        {
            lcm = a2;
            break;
        }
    }
    printf("%d %d\n", lcm, gcd);
    
}