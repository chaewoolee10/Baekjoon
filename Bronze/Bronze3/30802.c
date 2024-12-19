//30802
#include <stdio.h>
int bundle(int T, int tsize)
{
    if(tsize / T == 0 && tsize % T > 0 )
    {
        return 1;
    }
    else if(tsize / T > 0 && tsize % T == 0)
    {
        return tsize / T;
    }
    else if(tsize / T > 0 && tsize % T > 0)
    {
        return tsize / T + 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int tsize[6];
    int n; scanf("%d", &n);

    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &tsize[i]);
    }

    int T; scanf("%d", &T);
    int P; scanf("%d", &P);

    int bundlecount = 0;
    for(int i = 0; i < 6; i++)
    {
        bundlecount += bundle(T, tsize[i]);
    }

    printf("%d\n", bundlecount);
    printf("%d %d", n/P, n%P);
}
