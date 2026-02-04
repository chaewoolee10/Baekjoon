//14729
#include <stdio.h>
//0.000 ~ 100.000
int score[100001] = {};

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        double score_double; scanf("%lf", &score_double);
        score_double *= 1000.0;
        score_double += 0.5;
        score[(int)(score_double)]++;
    }
    int count = 0;
    for(int i = 0; i < 100001; i++)
    {
        if(score[i] != 0)
        {
            for(int j = 0; j < score[i]; j++)
            {
                if(count == 7)
                {
                    return 0;
                }
                double idx = (double)(i);
                printf("%.3lf\n", idx / 1000.0);
                
                count++;
            }
        }
        
    }
    
}
/*
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);
double arr[10000000] = {};

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        double score_double; scanf("%lf", &score_double);
        //printf("%lf\n", score_double * 1000.0);
        arr[i] = score_double * 1000.0;
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < 7; i++)
    {
        printf("%.3lf\n", arr[i] / 1000.0);
    }
}
int compare(const void *a, const void *b)
{
    const double *pa = (const double *)a;
    const double *pb = (const double *)b;
    
    if(*pa > *pb)
    {
        return 1;
    }
    else if(*pa < *pb)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    
}
*/
