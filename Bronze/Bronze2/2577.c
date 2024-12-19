//2577
#include <stdio.h>

int main()
{
    int str[10];

    int a; scanf("%d",&a);
    int b; scanf("%d",&b);
    int c; scanf("%d",&c);
    
    int mul = a * b * c;

    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        if(mul != 0)
        {
            count += 1;
        }
        str[i] = mul%10;
        mul /= 10;    
    }
    for(int j = 0; j < 10; j++)
    {
        int cnt = 0;
        for(int k = 0; k < count; k++)
        {
            if(str[k] == j)
            {
                cnt++;
            }    
        }
        printf("%d\n",cnt);

    }
}
