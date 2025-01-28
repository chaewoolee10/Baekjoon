// 1296
#include <stdio.h>
#include <string.h>

void lovecheck(char *str, int *love);

int main()
{
    char name[25] = "";
    scanf("%s", name);
    getchar();
    int n;
    scanf("%d", &n);

    int arr[50] = {};
    for(int i = 0; i < 50; i++)
    {
        arr[i] = 1;
    }
    
    char str[50][25] = {};
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(strcmp(str[i], str[j]) < 0)
            {
                char temp[25] = "";
                strcpy(temp, str[j]);
                strcpy(str[j], str[i]);
                strcpy(str[i], temp);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        int love[4] = {};
        
        lovecheck(str[i], love);
        lovecheck(name, love);
        
        for(int j = 0; j < 3; j++)
        {
            for(int k = j + 1; k < 4; k++)
            {
                int a = love[j] + love[k];
                arr[i] *= a;
            }
        }
        arr[i] %= 100;
        //printf("%d\n", arr[i]);
    }
    
    int max = 0;
    int maxindex = 0;
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            maxindex = i;
        }
    }
    printf("%s", str[maxindex]);
}

void lovecheck(char *str, int *love)
{
    int namelength2 = strlen(str);
    for (int j = 0; j < namelength2; j++)
    {
        switch (str[j])
        {
        case 'L':
            love[0]++;
            break;
        case 'O':
            love[1]++;
            break;
        case 'V':
            love[2]++;
            break;
        case 'E':
            love[3]++;
            break;
        default:
            break;
        }
    }
}