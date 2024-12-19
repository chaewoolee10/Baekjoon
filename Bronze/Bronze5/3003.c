//3003
#include <stdio.h>

int main()
{
    int chess[7] = {1, 1, 2, 2, 2, 8, 0};
    int white[7] = {0};
    int required[7] = {0};
    
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &white[i]);
        if(chess[i] != white[i])
        {
            required[i] = chess[i] - white[i];
        }
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", required[i]);
    }    
    
}