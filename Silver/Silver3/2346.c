// 2346
/*
#include <stdio.h>

int find_idx(int *que, int idx, int n);

int main()
{
    int n; scanf("%d", &n);
    int que[1000] = {};

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &que[i]);
    }
    int count = n - 1;
    int idx = 0;
    printf("%d ", idx + 1);
    while(1)
    {
        if(count == 0) break;
        count--;
        idx = find_idx(que, idx, n);
        printf("%d ", idx + 1);

        for(int i = 0; i < n; i++)
        {
            printf("%d ", que[i]);
        }
        printf("\n");
    }
}
int find_idx(int *que, int idx, int n)
{
    int count = que[idx];
    que[idx] = 0;

    if(count < 0)
    {
        count = -1 * count;
        for(int i = 0; i < count; i++)
        {
            idx--;
            if(idx < 0) idx = n - 1;
            if(que[idx] == 0)
            {
                while(1)
                {

                    if(que[idx] != 0) break;
                    idx--;
                    if(idx < 0) idx = n - 1;

                }
            }

        }
    }
    else
    {
        for(int i = 0; i < count; i++)
        {
            idx++;
            idx %= n;
            if(que[idx] == 0)
            {
                while(1)
                {

                    if(que[idx] != 0) break;
                    idx++;
                    idx %= n;
                }
            }

        }
    }
    return idx;
}*/
#include <stdio.h>

typedef struct
{
    int command;
    int num;
} deque;

void push_f(deque *arr, int *front, deque a);
deque pop_f(deque *arr, int *front);
void push_r(deque *arr, int *front, deque a);
deque pop_r(deque *arr, int *rear);

int main()
{
    int n;
    scanf("%d", &n);
    deque arr[2005] = {};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i + 1000].command);
        arr[i + 1000].num = i + 1;
    }
    int front = 1000;
    int rear = 1000 + n;

    int first_command = arr[front].command;
    printf("%d ", arr[front].num);
    pop_f(arr, &front);
    
    if(first_command < 0)
    {
        first_command = -1 * first_command;
        for(int i = 0; i < first_command; i++)
        {
            deque a = pop_r(arr, &rear);
            push_f(arr, &front, a);
        }
    }
    else
    {
        for(int i = 1; i < first_command; i++)
        {
            deque a = pop_f(arr, &front);
            push_r(arr, &rear, a);
        }
    }
    
    for (int i = 0; i < n - 1; i++)
    {
        
        int command = arr[front].command;
        printf("%d ", arr[front].num);
        pop_f(arr, &front);
        if (command < 0)
        {
            command = -1 * command;
            for (int j = 0; j < command; j++)
            {
                deque a = pop_r(arr, &rear);
                push_f(arr, &front, a);
            }
        }
        else
        {
            for (int j = 0; j < command - 1; j++)
            {
                deque a = pop_f(arr, &front);
                push_r(arr, &rear, a);
            }
            
        }
        
    }
}

void push_f(deque *arr, int *front, deque a)
{
    (*front)--;
    if(*front < 0) *front = 2004;
    arr[*front] = a;
}
deque pop_f(deque *arr, int *front)
{
    deque a = {arr[*front].command, arr[*front].num};
    (*front)++;
    (*front) %= 2005;
    return a;
}
void push_r(deque *arr, int *rear, deque a)
{
    arr[*rear] = a;
    (*rear)++;
    (*rear) %= 2005;
}
deque pop_r(deque *arr, int *rear)
{
    (*rear)--;
    if(*rear < 0) *rear = 2004;
    deque a = {arr[*rear].command, arr[*rear].num};
    return a;
}