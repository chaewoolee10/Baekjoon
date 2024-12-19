//2754
#include <stdio.h>

double grade(char a)
{
    switch(a)
    {
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        case 'D':
            return 1.0;
        default:
            return 0.0;
    }
}
double plus(char a)
{
    switch(a)
    {
        case '+':
            return 0.3;
        case '-':
            return -0.3;
        default:
            return 0;
    }
}

int main() 
{
    char str[2]; scanf("%s", str);
    double gpa = grade(str[0]) + plus(str[1]);
    printf("%.1lf\n",gpa);
}