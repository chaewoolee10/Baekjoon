// 10845
#include <stdio.h>
#include <string.h>
#define SIZE 10000

void commandcheck(char *command, int *arr);

int main()
{
    int n;
    scanf("%d", &n);
    
    int arr[SIZE] = {};

    for (int i = 0; i < n; i++)
    {
        char command[10] = {};
        scanf("%s", command);
        commandcheck(command, arr);
    }
}

void commandcheck(char *command, int *arr)
{
    if (!strcmp(command, "push"))
    {
        int a; scanf("%d", &a);
        
        for(int i = 0; i < SIZE; i++)
        {
            if(arr[SIZE - i - 1] == 0)
            {
                arr[SIZE - i - 1] = a;
                break;    
            }
        }
    }
    else if (!strcmp(command, "pop"))
    {
        int flag = 0;
        for(int i = SIZE - 1; i >= 0; i--)
        {
            if(arr[i] != 0)
            {
                printf("%d\n", arr[i]);
                arr[i] = 0;
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            printf("-1\n");
        }
    }
    else if (!strcmp(command, "size"))
    {
        int count = 0;
        for(int i = 0; i < SIZE; i++)
        {
            if(arr[i] != 0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    else if (!strcmp(command, "front"))
    {
        int flag = 0;
        for(int i = SIZE - 1; i >= 0; i--)
        {
            if(arr[i] != 0)
            {
                printf("%d\n", arr[i]);
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            printf("-1\n");
        }   
    }
    else if (!strcmp(command, "back"))
    {
        int flag = 0;
        for(int i = 0; i < SIZE; i++)
        {
            if(arr[i] != 0)
            {
                printf("%d\n", arr[i]);
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            printf("-1\n");
        }   
    }
    else // empty
    {
        int count = 0;
        for(int i = 0; i < SIZE; i++)
        {
            if(arr[i] != 0)
            {
                count++;
            }
        }
        count == 0 ? printf("1\n") : printf("0\n");
    }
}
