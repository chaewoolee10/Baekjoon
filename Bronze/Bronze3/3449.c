//3449
#include <stdio.h>
#include <string.h>

int hammingdist();

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Hamming distance is %d.\n", hammingdist());
    }
}
int hammingdist()
{
    char str1[104] = {}; scanf("%s", str1);
    char str2[104] = {}; scanf("%s", str2);
    int length = strlen(str1);
    int count = 0;
    for(int i = 0; i < length; i++)
    {
        if(str1[i] != str2[i])
        {
            count++;
        }
    }
    return count;
}
