//16727
#include <stdio.h>

int main()
{
    int p1, s1; scanf("%d %d", &p1, &s1);
    int p2, s2; scanf("%d %d", &s2, &p2);
    
    int p = p1 + p2;
    int s = s1 + s2;
    
    if(p != s)
    {
        p < s ? printf("Esteghlal") : printf("Persepolis");
    }
    else
    {
        if(p2 != s1)
        {
            p2 < s1 ? printf("Esteghlal") : printf("Persepolis");
        }
        else
        {
            printf("Penalty");
        }
    }
}