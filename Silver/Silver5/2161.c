//2161
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int dat[10000] = {};
    
    for(int i = 0; i < n; i++)
    {
        dat[i] = i + 1;
    }
    int addr = 0;
    int back = n;
    while(1)
    {
        printf("%d ", dat[addr]);
        dat[back] = dat[addr + 1];
        addr += 2;
        back++;
        if(addr == back)
        {
            break;
        }
    }
}