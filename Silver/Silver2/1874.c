//1874
#include <stdio.h>

int dat[100005] = {};

int stack[200005] = {};
int addr = 0;

int stack_count[200005] = {};
int count = 0;
int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &dat[i]);
    }
    
    for(int i = 0; i < dat[0]; i++) //초기값까지 push
    {
        stack[addr] = i + 1;
        addr++;
        stack_count[count] = 1;
        count++;
    }
    addr--; //맨 처음 값 pop
    stack_count[count] = -1;
    count++;
    
    int push_val = dat[0] + 1;
    
    int check = 1;
    
    for(int i = 1; i < n; i++)
    {
        if(dat[i] == stack[addr - 1])
        {
            addr--;
            stack_count[count] = -1;
            count++;
        }
        else if(dat[i] > stack[addr - 1])
        {
            for(int j = push_val; j <= dat[i]; j++)
            { 
                stack[addr] = j;
                addr++;
                stack_count[count] = 1;
                count++;
            }
            addr--; //dat까지 push 후 한번 pop
            stack_count[count] = -1;
            count++;
            push_val = dat[i] + 1;
        }
        else
        {
            check = 0;
        }
    }
    if(check)
    {
        for(int i = 0; i < count; i++)
        {
            if(stack_count[i] == 1)
            {
                printf("+\n");
            }
            else
            {
                printf("-\n");
            }
        }
    }
    else
    {
        printf("NO");
    }
}