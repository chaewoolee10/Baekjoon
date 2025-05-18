//6996
#include <stdio.h>
#include <string.h>

int checker(char *str1, char *str2);

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        char str1[101] = {}; scanf("%s", str1);
        char str2[101] = {}; scanf("%s", str2);
        if(checker(str1, str2) == 1)
        {
            printf("%s & %s are anagrams.\n", str1, str2);
        }
        else
        {
            printf("%s & %s are NOT anagrams.\n", str1, str2);
        }
        
    }
}

int checker(char *str1, char *str2)
{
    int arr1['z' - 'a' + 1] = {};
    int arr2['z' - 'a' + 1] = {};
    
    if(strlen(str1) != strlen(str2))
    {
        return 0;    
    }
    else
    {
        int length = strlen(str1);
        for(int i = 0; i < length; i++)
        {
            arr1[str1[i] - 'a']++;
            arr2[str2[i] - 'a']++;
        }
        int check = 1;
        for(int i = 0; i <= 'z' - 'a'; i++)
        {
            if(arr1[i] != arr2[i])
            {
                check = 0;
            }
        }
        return check;
    }
    
    
}