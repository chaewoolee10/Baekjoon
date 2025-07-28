//16139
#include <stdio.h>
#include <string.h>

typedef struct sum
{
    int cumu[200005];
}cum_sum;

char str[200005] = {};

int main()
{
    scanf("%s", str);
    int length = strlen(str);
    
    cum_sum arr['z' - 'a' + 1] = {};
    cum_sum prefix['z' - 'a' + 1] = {};
    
    for(int i = 0; i < length; i++)
    {
        arr[str[i] - 'a'].cumu[i]++;
    }
    for(int i = 'a' - 'a'; i < 'z' - 'a' + 1; i++)
    {
        prefix[i].cumu[0] = 0;
        prefix[i].cumu[1] = arr[i].cumu[0];
        for(int j = 2; j <= length; j++)
        {
            prefix[i].cumu[j] = prefix[i].cumu[j - 1] + arr[i].cumu[j - 1];
        }
    }
    /*
    for(int i = 0; i < length; i++)
    {
        printf("%d ", arr[0].cumu[i]);
    }
    printf("\n");
    for(int i = 0; i <= length; i++)
    {
        printf("%d ", prefix[0].cumu[i]);
    }
    */
    int n; scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        char c; scanf("%c", &c);
        int start; scanf("%d", &start);
        int end; scanf("%d", &end);
       
        //printf("%c %d %d\n", c, start, end);
        printf("%d\n", prefix[c - 'a'].cumu[end + 1] - prefix[c - 'a'].cumu[start]);
        getchar();
    }
    
}