// 15828
#include <stdio.h>

int main()
{
    int buffer_size = 0;
    scanf("%d", &buffer_size);
    int router_que[200005] = {};
    int front = 0;
    int end = 0;
    while (1)
    {
        int a;
        scanf("%d", &a);
        if (a == -1)
            break;
        if (a != 0)
        {
            if (front - end >= buffer_size)
                continue;
            router_que[front] = a;
            front++;
        }
        else
        {
            end++;
        }
    }
    if (front == end)
    {
        printf("empty");
    }
    else
    {
        for (int i = end; i < front; i++)
        {
            printf("%d ", router_que[i]);
        }
    }
}
