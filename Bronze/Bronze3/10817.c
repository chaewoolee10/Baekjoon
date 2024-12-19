//10817
#include <stdio.h>

int main()
{
    int num[3];
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    int min = 101; 
    int max = 0;

    int minindex = 0;
    int maxindex = 0;

    for(int i = 0; i < 3; i++)
    {
        if(max < num[i])
        {
            max = num[i];
            maxindex = i;        
        }
        if(min > num[i])
        {
            min = num[i];
            minindex = i;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(i != maxindex && i != minindex)
        {
            printf("%d", num[i]);
            break;
        }
    }
}