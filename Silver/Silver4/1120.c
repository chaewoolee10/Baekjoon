//1120
#include <stdio.h>
#include <string.h>

int main()
{
    char a[55] = {}; scanf("%s", a);
    char b[55] = {}; scanf("%s", b);
    
    int a_length = strlen(a);
    int b_length = strlen(b);
    int min = b_length;
    
    for(int i = 0; i <= b_length - a_length; i++)
    {
        int diff = 0;
        for(int a_idx = 0, b_idx = i; b_idx < i + a_length; b_idx++)
        {
            if(a[a_idx] != b[b_idx])
            {
                diff++;
            }
            a_idx++;
            
        }
        if(diff < min)
        {
            min = diff;
        }
    }
    printf("%d", min);
}