//1966
#include <stdio.h>

int printer(int num, int target);

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
       int num; scanf("%d", &num);
       int target; scanf("%d", &target);
       
       int a = printer(num, target);
       printf("%d\n", a);
    }
}
int printer(int num, int target)
{
    int dat[5000] = {};
    int head = 0;
    int tail = 0;
    int seq = 0;
    
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &dat[i]);
        tail++;
    }
    
    while (1)
    {
        int check = 0;
        for(int i = head; i < tail; i++)
        {
            if(dat[head] < dat[i])
            {
                if(head == target)
                {
                    target = tail;
                }
                dat[tail] = dat[head];
                head++;
                tail++;
                check = 1;
                break;
            }
        }
        if(check == 0) //맨 앞이 제일 우선순위가 높거나 같음
        {
            seq++;
            if(head == target)
            {
                return seq;
            }
            head++;
        }
    }
    
}