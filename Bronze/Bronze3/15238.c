//15238
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    char str[1005] = {}; scanf("%s", str);
    int alpharr['z' - 'a' + 1] = {};
    
    for(int i = 0; i < n; i++)
    {
        int alph = str[i] - 'a';
        alpharr[alph]++;
    }
    int max = 0;
    int maxidx = 0;
    
    for(int i = 0; i < 'z' - 'a' + 1; i++)
    {
        if(max < alpharr[i])
        {
            max = alpharr[i];
            maxidx = i;
        }
    }
    printf("%c %d", maxidx + 'a', max);
}
