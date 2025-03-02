//10797
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    
    for(int i = 0; i < 5; i++)
    {
        int number = 0; scanf("%d", &number);
        if(n == number)
        {
            count++;
        }
    }
    printf("%d", count);   
    
    
}