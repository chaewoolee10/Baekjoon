// 1927
#include <stdio.h>

typedef long long int LLD;

LLD dat[250000] = {};
int back = 1;

void downheap();
void upheap(int a);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        LLD a;
        scanf("%lld", &a);
        if (a == 0)
        {
            downheap();
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
                upheap(a);
            }
        }
        // for (int j = 0; j < 10; j++)
        // {
        //     printf("%lld ", dat[j]);
        // }
        // printf("\n");
    }
}

void downheap()
{
    if (back == 1)
    {
        printf("0\n");
    }
    else
    {
        printf("%lld\n", dat[1]);
        int i = 1;
        back--;
        dat[1] = dat[back];
        dat[back] = 0;
        while (1)
        {
            if (i * 2 >= back)
            {
                break;
            }
            int smallidx = i * 2;
            if (smallidx + 1 < back)
            {
                if (dat[smallidx] > dat[smallidx + 1])
                {
                    smallidx++;
                }
            }
            if (dat[smallidx] <= dat[i])
            {
                LLD tmp = dat[smallidx];
                dat[smallidx] = dat[i];
                dat[i] = tmp;
                i = smallidx;
            }
            else
            {
                break;
            }
        }
    }
}
void upheap(int a)
{
    dat[back] = a;
    int i = back;
    back++;
    while (1)
    {
        if (dat[i] >= dat[i / 2] || i == 1)
        {
            break;
        }
        if (dat[i] <= dat[i / 2])
        {
            LLD tmp = dat[i];
            dat[i] = dat[i / 2];
            dat[i / 2] = tmp;
            i /= 2;
        }
    }
}
