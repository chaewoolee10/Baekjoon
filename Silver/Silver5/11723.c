// 11723
#include <stdio.h>
#include <string.h>
#define SIZE 20

void commandcheck(char *command, int *arr);

int main()
{
    int n;
    scanf("%d", &n);
    char command[10] = {};
    int arr[SIZE] = {};

    for (int i = 0; i < n; i++)
    {
        scanf("%s", command);
        commandcheck(command, arr);
    }
}

void commandcheck(char *command, int *arr)
{
    if (!strcmp(command, "add"))
    {
        int a;
        scanf("%d", &a);

        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = a;
                break;
            }
        }
    }
    else if (!strcmp(command, "remove"))
    {
        int a;
        scanf("%d", &a);

        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i] == a)
            {
                arr[i] = 0;
                break;
            }
        }
    }
    else if (!strcmp(command, "check"))
    {
        int a;
        scanf("%d", &a);
        int flag = 0;
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i] == a)
            {
                flag = 1;
                break;
            }
        }
        flag == 0 ? printf("0\n") : printf("1\n");
        
    }
    else if (!strcmp(command, "toggle"))
    {
        int a;
        scanf("%d", &a);
        int flag = 1;
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i] == a)
            {
                arr[i] = 0;
                flag = 0;
                break;
            }
        }
        if (flag) // flag == 1
        {
            for (int i = 0; i < SIZE; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = a;
                    break;
                }
            }
        }
    }
    else if (!strcmp(command, "all"))
    {
        for(int i = 0; i < SIZE; i++)
        {
            arr[i] = i + 1;
        }
    }
    else // empty
    {
        for(int i = 0; i < SIZE; i++)
        {
            arr[i] = 0;
        }
    }
}