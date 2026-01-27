//13235
#include <stdio.h>
#include <string.h>

int main()
{
    char str[25] = {}; scanf("%s", str);
    int front = 0;
    int rear = strlen(str) - 1;
    
    while(1)
    {
        if(front == rear || front > rear)
        {
            printf("true");
            return 0;            
        }
        if(str[front] != str[rear])
        {
            printf("false");
            return 0;
        }
        else
        {
            front++;
            rear--;
        }
    }
}