//28278
#include <stdio.h>

void stackfunc(int command, int a);

int dat[1000005] = {};
int addr = 0;

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int command; scanf("%d", &command);
        int a = 0;
        if(command == 1)
        {
            scanf("%d", &a);
        }
        stackfunc(command, a);
    }
}

void stackfunc(int command, int a)
{
    switch(command)
    {
        case 1:
            dat[addr] = a;
            addr++;
            break;
        case 2:
            if(addr == 0)
            {
                printf("-1\n");
            }
            else
            {
                addr--;
                printf("%d\n", dat[addr]);
            }
            break;
        case 3:
            printf("%d\n", addr);
            break;
        case 4:
            addr == 0 ? printf("1\n") : printf("0\n");
            break;
        case 5:
            addr == 0 ? printf("-1\n") : printf("%d\n", dat[addr - 1]);
            break;
    }
    
}