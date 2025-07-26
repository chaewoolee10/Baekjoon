// 28279
#include <stdio.h>

const int initial = 1000000;

int dat[2 * initial + 5] = {};
int front = initial;
int back = initial;

void deque_func(int command);
void datprint();

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int command = 0;
        scanf("%d", &command);
        deque_func(command);
    }
}

void deque_func(int command)
{
    int num = 0;
    switch (command)
    {
    case 1:
        scanf("%d", &num);
        dat[front] = num;
        front++;
        break;
    case 2:
        scanf("%d", &num);
        back--;
        dat[back] = num;
        break;
    case 3:
        if(front - back == 0)
        {
            printf("-1\n");
        }
        else
        {
            front--;
            printf("%d\n", dat[front]);
        }
        break;
    case 4:
        if(front - back == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[back]);
            back++;
        }
        break;
    case 5:
        printf("%d\n", front - back);
        break;
    case 6:
        front - back == 0 ? printf("1\n") : printf("0\n");
        break;
    case 7:
        if(front - back == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[front - 1]);
        }
        break;
    case 8:
    if(front - back == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[back]);
        }
        break;
    }
}
