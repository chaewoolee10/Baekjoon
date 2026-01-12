//5218
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        char str1[25] = {}; scanf("%s", str1);
        getchar();
        char str2[25] = {}; scanf("%s", str2);
        int length = strlen(str1);
        printf("Distances: ");
        for(int j = 0; j < length; j++)
        {
            if(str2[j] - str1[j] >= 0)
            {
                printf("%d ", str2[j] - str1[j]);
            }
            else
            {
                printf("%d ", str2[j] + 26 - str1[j]);
            }
        }
        printf("\n");
    }
}