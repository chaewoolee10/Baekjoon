//17614
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        int a = i;
        while(1)
        {
            if(a == 0) break;
            switch (a % 10)
            {
            case 3:
            case 6:
            case 9:
                count++;
                break;
            }
            a /= 10;
        }
    }
    printf("%d", count);
}