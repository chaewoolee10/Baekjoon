//11557
#include <stdio.h>

struct university
{
    char name[21];
    int alcohol;
};


int main()
{
    int t; scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        struct university arr[100] = {};
        int n; scanf("%d", &n);
        int max = 0;
        int maxindex = 0;
        
        for(int j = 0; j < n; j++)
        {
            scanf("%s", arr[j].name);
            scanf("%d", &arr[j].alcohol);
            
            if(arr[j].alcohol > max)
            {
                max = arr[j].alcohol;
                maxindex = j;
            }
        }
        
        printf("%s\n", arr[maxindex].name);
        
    }
}