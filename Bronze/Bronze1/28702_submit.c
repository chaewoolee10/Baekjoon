//28702
#include <stdio.h>
#include <string.h>

int numberindexfinder(char *str);
int numbercalculator(char *str);
void fizzbuzz(int a);

int main()
{
    char str[3][9] = {};
    int numberindex = 0;
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%s", str[i]);
        if(numberindexfinder(str[i]))
        {
            numberindex = i;
        }
    }
    
    int number = numbercalculator(str[numberindex]);
    
    switch(numberindex)
    {
        case 0:
            number += 3;
            break;
        case 1:
            number += 2;
            break;
        case 2:
            number += 1;
            break;
    }
    
    fizzbuzz(number);
}

int numberindexfinder(char *str)
{
    
        if(!strcmp(str, "Fizz"))
        {
            return 0;
        }
        else if(!strcmp(str, "Buzz"))
        {
            return 0;
        }
        else if(!strcmp(str, "FizzBuzz"))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    
}

int numbercalculator(char *str)
{
    int n = 0;
    int length = strlen(str);
    int k = 1;
    
    for(int i = 0; i < length; i++)
    {
        n += (str[length - i - 1] - '0') * k;
        k *= 10;
    }
    return n;
    
}

void fizzbuzz(int a)
{
    if(a % 3 == 0 && a % 5 == 0)
    {
        printf("FizzBuzz");
    }
    else if(a % 3 == 0)
    {
        printf("Fizz");
    }
    else if(a % 5 == 0)
    {
        printf("Buzz");
    }
    else
    {
        printf("%d", a);
    }
}