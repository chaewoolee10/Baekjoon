// 11279
#include <stdio.h>

long long int dat[300000] = {};
int back = 1;
void hip_printing();
void up_hip(long long int a);
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long long int a;
        scanf("%lld", &a);
        if (a == 0)
        {
            if (back == 1)
            {
                printf("0\n");
            }
            else
            {
                hip_printing();
            }
        }
        else
        {
            if (back == 1)
            {
                dat[back] = a;
                back++;
            }
            else
            {
                up_hip(a);
            }
        }
        
    }
}

void up_hip(long long int a)
{
    int i = back;
    back++;
    dat[i] = a;
    while (1)
    {
        if (dat[i / 2] > dat[i] || i == 1)
        {
            break;
        }
        else
        {
            long long int tmp = dat[i];
            dat[i] = dat[i / 2];
            dat[i / 2] = tmp;
            i /= 2;
        }
    }
}

void hip_printing()
{
    printf("%lld\n", dat[1]);
    back--;
    dat[1] = dat[back];
    dat[back] = 0;
    int i = 1;
    while (1)
    {
        if(i * 2 > back)
        {
            break;
        }
        int largeidx = i * 2;
        if( largeidx + 1 < back && dat[largeidx + 1] != 0)
        {
            largeidx += dat[largeidx] < dat[largeidx + 1] ? 1 : 0;
        }
        if(dat[i] < dat[largeidx])
        {
            long long int tmp = dat[i];
            dat[i] = dat[largeidx];
            dat[largeidx] = tmp;
            i = largeidx;
        }
        else
        {
            break;
        }
    }
}