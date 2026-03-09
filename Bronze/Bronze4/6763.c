//6763
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int speed; scanf("%d", &speed);
    
    if(speed - n <= 0)
    {
        printf("Congratulations, you are within the speed limit!");
    }
    else if(speed - n >= 1 && speed - n <= 20)
    {
        printf("You are speeding and your fine is $100.");
    }
    else if(speed - n >= 21 && speed - n <= 30)
    {
        printf("You are speeding and your fine is $270.");
    }
    else
    {
        printf("You are speeding and your fine is $500.");
    }
}