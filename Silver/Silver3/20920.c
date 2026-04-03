//20920
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char word[12];
    int len;
    int count;
}english;
 
int compare(const void *a, const void *b);
int refine_compare(const void *a, const void *b);

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    
    english arr[100004] = {};
    english arr_refine[100004] = {};
    int idx = 0;
    
    for(int i = 0; i < n; i++)
    {
        char str[12] = {}; scanf("%s", str);
        int len_input = strlen(str);
        
        if(len_input >= m)
        {
            arr[idx].len = len_input;
            strcpy(arr[idx].word, str);
            idx++;
        }
    }
    qsort(arr, idx, sizeof(arr[0]), compare);
    int refine_idx = 0;
    strcpy(arr_refine[refine_idx].word, arr[0].word);
    arr_refine[refine_idx].count++;
    arr_refine[refine_idx].len = arr[0].len;
    
    for(int i = 1; i < idx + 1; i++)
    {
        if(!strcmp(arr_refine[refine_idx].word, arr[i].word))
        {
            arr_refine[refine_idx].count++;
        }
        else
        {
            refine_idx++;
            strcpy(arr_refine[refine_idx].word, arr[i].word);
            arr_refine[refine_idx].count++;
        }
        arr_refine[refine_idx].len = arr[i].len;
        
    }
    //printf("%d\n", refine_idx);
    qsort(arr_refine, refine_idx, sizeof(arr_refine[0]), refine_compare);
    for (int i = 0; i < refine_idx; i++)
    {
        printf("%s\n",arr_refine[i].word);
    }
    
}
int compare(const void *a, const void *b)
{
    const english *pa = (const english *)a;
    const english *pb = (const english *)b;
    
    if(pa->len > pb->len) return 1;
    else if(pa->len < pb->len) return -1;
    else
    {
        if(strcmp(pa->word, pb->word) > 0) return 1;
        else if(strcmp(pa->word, pb->word) < 0) return -1;
        else return 0;
    }
}

int refine_compare(const void *a, const void *b)
{
    const english *pa = (const english *)a;
    const english *pb = (const english *)b;
    
    if(pa->count > pb->count) return -1;
    else if(pa->count < pb->count) return 1;
    else
    {
        if(pa->len > pb->len) return -1;
        else if(pa->len < pb->len) return 1;
        else
        {
            if(strcmp(pa->word, pb->word) > 0) return 1;
            else if(strcmp(pa->word, pb->word) < 0) return -1;
            else return 0;
        }
    }
}