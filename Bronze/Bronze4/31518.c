//31518
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int sevencount = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int a; scanf("%d",&a);
            if(a == 7)
            {
                sevencount++;
            }
        }
    }
    if(sevencount >= 3)
    {
        printf("777");
    }
    else
    {
        printf("0");
    }
}