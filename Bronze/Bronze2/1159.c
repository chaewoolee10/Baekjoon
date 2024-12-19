//1159
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    char str[155][35] = {};
    int firstini['z'-'a'+1] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    
    int count = 0;
    
    for(int i = 'a'; i <= 'z'; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(str[j][0] == i)
            {
                count++;
            }
        }
        if(count >= 5)
        {
            firstini[i - 'a'] = i;
        }
        count = 0;
    }
   
    int check = 0; 
    
    for(int i = 0; i <= 'z'-'a'; i++)
    {
        if(firstini[i] != 0)
        {
            printf("%c", firstini[i]);
            check = 1;
        }
    }
    if(check == 0)
    {
        printf("PREDAJA\n");
    }
}