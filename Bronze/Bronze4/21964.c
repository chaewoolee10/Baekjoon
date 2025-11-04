//21964
#include <stdio.h>

char str2[100005] = {};

int main()
{
    int n; scanf("%d", &n);
    scanf("%s", str2);
    
    for(int i = n - 5; i < n; i++)
    {
        printf("%c", str2[i]);
    }
}