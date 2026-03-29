// 1969
#include <stdio.h>
#include <string.h>

int cal_hamming(char *str_dna, char *str);

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);

    char str[1000][55] = {};
    char str_dna[55] = {};
    int hamming = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < m; i++)
    {
        int dna_list[4] = {}; // T G C A
        for (int j = 0; j < n; j++)
        {
            switch (str[j][i])
            {
            case 'T':
                dna_list[0]++;
                break;
            case 'G':
                dna_list[1]++;
                break;
            case 'C':
                dna_list[2]++;
                break;
            case 'A':
                dna_list[3]++;
                break;
            }
        }
        int max = 0;
        int max_idx = 0;
        for (int k = 0; k < 4; k++)
        {
            if (max <= dna_list[k])
            {
                max = dna_list[k];
                max_idx = k;
            }
        }
        switch (max_idx)
        {
        case 0:
            str_dna[i] = 'T';
            break;
        case 1:
            str_dna[i] = 'G';
            break;
        case 2:
            str_dna[i] = 'C';
            break;
        case 3:
            str_dna[i] = 'A';
            break;
        }
    }
    for(int i = 0; i < n; i++)
    {
        hamming += cal_hamming(str_dna, str[i]);
    }
    printf("%s\n%d", str_dna, hamming);
}
int cal_hamming(char *str_dna, char *str)
{
    int len = strlen(str);
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(str_dna[i] != str[i]) count++;
    }
    return count;
}