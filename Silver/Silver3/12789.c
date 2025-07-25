// 12789
#include <stdio.h>

int check_func(int *line, int n);

int main()
{
    int n;
    scanf("%d", &n);

    int line[1005] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &line[i]);
    }
    int check = check_func(line, n);

    check == 1 ? printf("Nice") : printf("Sad");
}

int check_func(int *line, int n)
{
    int wating[1006] = {};
    int cur = 1;
    int wating_addr = 0;
    int i = 0;
    
    while(1)
    {
        if(i == n)
        {
            break;
        }
        if (line[i] != cur) // 줄에서 다름
        {
            if(wating_addr == 0) //대기줄 주소가 0이면 무조건 push
            {
                wating[wating_addr] = line[i];
                wating_addr++;
                //printf("stored to wating, addr == 0\n");
                i++;
                continue;
            }
            if (wating[wating_addr - 1] != cur)
            {
                wating[wating_addr] = line[i];
                wating_addr++;
                //printf("stored to wating\n");
                i++;
            }
            else if(wating[wating_addr - 1] == cur) //대기줄에서 pop
            {
                //printf("from wating\n");
                wating_addr--;
                cur++;
                continue;
            }
        }
        else //줄에서 같음
        {
            //printf("from line\n");
            cur++;
            i++;
        }
        
    }
    
    if(wating_addr == 0)
    {
        return 1;
    }
    else //대기열 줄에 수가 남아있는 경우
    {
        int start = cur - 1;
        for(int i = start; i < n; i++)
        {
            if(wating[wating_addr - 1] == cur)
            {
                wating_addr--;
                cur++;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
}