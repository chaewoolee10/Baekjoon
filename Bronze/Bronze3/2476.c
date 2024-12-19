
//2476
#include <stdio.h>

int calculator(int a, int b, int c)
{
    int prize = 0;
    if(a == b && a == c)
    {
        prize = 10000 + a * 1000;
    }
    else if(a == b || a == c || b == c)
    {
        if(a == b)
        {
            prize = 1000 + a * 100;
        }
        else if(a == c)
        {
            prize = 1000 + a * 100;
        }
        else
        {
            prize = 1000 + b * 100;
        }
    }
    else
    {
        int arr[3];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        
        int max = 0;
        for(int i = 0; i < 3; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];
            }
        }
        prize = max * 100;
    }    
    return prize;

}

int main()
{
    int n; scanf("%d", &n);

    int max = 0;
    int prize = 0;

    for(int i = 0; i < n; i++)
    {
        int a = 0; scanf("%d",&a);
        int b = 0; scanf("%d",&b);
        int c = 0; scanf("%d",&c);
        
        prize = calculator(a,b,c);

        if(max < prize)
        {
            max = prize;
        }
    }
    printf("%d\n", max);
}