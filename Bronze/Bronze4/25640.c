//25640
#include <stdio.h>
#include <string.h>

int main()
{
    char mbti_target[5] = {}; scanf("%s", mbti_target);
    int n; scanf("%d",&n);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        char str[5] = {}; scanf("%s", str);
        if(!strcmp(str, mbti_target))
        {
            count++;
        }
    }
    printf("%d", count);
    
}