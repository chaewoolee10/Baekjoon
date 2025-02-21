#include <stdio.h>
#include <string.h>

int main() {
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        char str[22] = "";
        scanf("%s", str);
        int length = strlen(str);
        
        if(length < 6 || length > 9)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }

    return 0;
}
