//10808
#include <stdio.h>
#include <string.h>

int main()
{
    char str[105] = {};
    scanf("%s", str);
    int length = strlen(str);
    
    int count['z' - 'a' + 1] = {};
    
    for(int i = 0; i < length; i++)
    {
        count[str[i] - 'a']++;
    }
    for(int i = 0; i <= 'z' - 'a'; i++)
    {
        printf("%d ", count[i]);
    }
}