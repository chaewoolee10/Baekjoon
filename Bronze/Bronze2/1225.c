//1225
#include <stdio.h>
#include <string.h>

int main()
{
    char a[10002]; scanf("%s", a);
    char b[10002]; scanf("%s", b);
    
    long long int newmul = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
    
    for(int i = 0; i < len_b; i++)
    {
        for(int j = 0; j < len_a; j++)
        {
            newmul += (a[j] - '0') * (b[i] - '0');
        }
    }
    printf("%lld", newmul);
    
    
}