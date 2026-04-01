//2875
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    int k; scanf("%d", &k);
    int max = 0;
    
    int k_inc = 0;
    int k_dec = k;
    while(1)
    {
        if(k_dec == -1) break;
        int n_avail = (n - k_inc) / 2;
        int m_avail = m - k_dec;
        k_inc++;
        k_dec--;
        
        int team = n_avail > m_avail ? m_avail : n_avail;
        if(team > max) max = team;
    }
    printf("%d", max);
}