// 13241
#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int m;
    scanf("%lld", &m);

    long long int nmul = 1;
    long long int mmul = 1;

    while (1)
    {
        long long int i = n;
        long long int j = m;
        
        i *= nmul;
        j *= mmul;
        
        if (i < j)
        {
            nmul++;
        }
        else if (i > j)
        {   
            mmul++;
        }
        else
        {
            printf("%lld", i);
            break;
        }
    }
}
