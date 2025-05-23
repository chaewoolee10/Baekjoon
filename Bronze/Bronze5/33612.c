//33612
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int month = 8 + 7 * (n - 1);
    int year = 2024;
    year += month / 12;
    month %= 12;
    
    if(month == 0)
    {
        month = 12;
        year -= 1;
    }
    printf("%d %d",year, month);
}