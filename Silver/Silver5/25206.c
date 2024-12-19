// 25206
#include <stdio.h>
double cal(char *grade)
{
    double gpa = 0.0;
    switch (*grade)
    {
    case 'A':
        gpa += 4.0;
        break;
    case 'B':
        gpa += 3.0;
        break;
    case 'C':
        gpa += 2.0;
        break;
    case 'D':
        gpa += 1.0;
        break;
    default:
        break;
    }
    if (*(grade + 1) == '+')
    {
        gpa += 0.5;
    }
    return gpa;
}

int main()
{
    char str[55] = {};
    double credit = 0.0;
    double gpa = 0.0;
    char grade[10] = {};
    double a = 0.0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s", str);
        scanf("%lf", &credit);
        scanf("%s", grade);
        if (*grade == 'P')
        {
            continue;
        }
        else
        {
            a += credit;
            gpa += (cal(grade) * credit);
        }
    }
    printf("%lf", gpa / a);
}