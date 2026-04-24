//30868
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int five = a / 5;
        int one = a - five * 5;
        for(int j = 0; j < five; j++)
        {
            printf("++++ ");
        }
        for(int j = 0; j < one; j++)
        {
            printf("|");
        }
        printf("\n");
    }
    
}