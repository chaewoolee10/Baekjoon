//2755
#include <stdio.h>

int gradetoscore(char *grade);
int carrycheck(int gpa);

int main()
{
    int n; scanf("%d", &n);
    int sum_gpa = 0;
    int sum_credit = 0;
    
    for(int i = 0; i < n; i++)
    {
        char name[101] = {}; scanf("%s", name);
        int credit; scanf("%d", &credit);
        char grade[3] = {}; scanf("%s", grade);
        sum_gpa += credit * gradetoscore(grade);
        sum_credit += credit;
    }
    int result = sum_gpa / sum_credit + carrycheck(sum_gpa / sum_credit);
    
    printf("%d.", result / 1000);
    printf("%d", result / 100 - (result / 1000) * 10);
    printf("%d", result / 10 - result / 100 * 10);
    
}

int gradetoscore(char *grade)
{
    int score = 0;
    if (grade[0] == 'F')
    {
        return score;
    }
    else
    {
        switch (grade[0])
        {
        case 'A':
            score = 4000;
            break;
        case 'B':
            score = 3000;
            break;
        case 'C':
            score = 2000;
            break;
        case 'D':
            score = 1000;
            break;
        case 'F':
            break;
        }
        switch (grade[1])
        {
        case '+':
            score += 300;
            break;
        case '0':
            break;
        case '-':
            score -= 300;
            break;
        }
        return score;
    }
}

int carrycheck(int gpa)
{
    if(gpa % 10 >= 5)
    {
        return 10;
    }
    else
    {
        return 0;
    }
}