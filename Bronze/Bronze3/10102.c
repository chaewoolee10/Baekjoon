//10102
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    char str[16] = {}; scanf("%s", str);
    
    int a_count = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(str[i] == 'A') a_count++;
    }
    if(a_count > n - a_count) printf("A");
    else if(a_count < n - a_count) printf("B");
    else printf("Tie");
}
