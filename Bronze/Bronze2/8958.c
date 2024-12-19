//8958
#include <stdio.h>
#include <string.h>

int main()
{
    int testcase; scanf("%d",&testcase);

    for(int i = 0; i < testcase; i++)
    {
        char str[80]; scanf("%s",str);

        int score = 0;
        int delta = 1;
        for(int i = 0; i < strlen(str); i++)
        {
            if(str[i] == 'X')
            {
                delta = 1;
            }   
            else
            {
                score += delta;
                delta++;
            } 
        }
        printf("%d\n",score);
        


    }   
}