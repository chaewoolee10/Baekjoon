//1157 
#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000005]; scanf("%s", str);
    int alphabetcount['z'-'a'+1];
    
    for(int i = 0; i < 'z'-'a'+1; i++)
    {
        alphabetcount[i] = 0;
    }

    int length = strlen(str); // for문 안에 strlen 쓰지 않고 length 변수로 따로 만들기

    for(int i = 0; i < length; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            alphabetcount[str[i] - 'a']++;
        }
        else
        {
            alphabetcount[str[i] - 'A']++;
        }
    }
    
    int countmax = 0;
    int countmax_index = 0;
    for(int i = 0; i < 'z'-'a'+1; i++)
    {
        if(countmax < alphabetcount[i])
        {
            countmax = alphabetcount[i];
            countmax_index = i;
        }
    }

    for(int i = 0; i < 'z'-'a'+1; i++)
    {
        if(alphabetcount[countmax_index] == alphabetcount[i] && countmax_index != i)
        {
            printf("?");
            return 0;
        }    
    }
    printf("%c\n", 'A' + countmax_index);


}