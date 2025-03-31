//5355
#include <stdio.h>
#include <string.h>

void operation(double *n, char c);

int main()
{
    int t; scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        double n; scanf("%lf", &n);
        double *p = &n;
        
        char op[6] = {}; scanf("%[^\n]s", op);
        getchar();
        
        for(int j = 0; j < strlen(op); j++)
        {
            if(op[j] != ' ')
            {
                operation(p, op[j]);
            }
        }
        printf("%.2lf\n",n);
        
        for(int k = 0; k < 6; k++)
        {
            op[k] = '\0';
        }
    }
}


void operation(double *n, char c)
{
    
    switch(c)
    {
        case '@':
            *n *= 3.0f;
            break;
        case '%':
            *n += 5.0f;
            break;
        case '#':
            *n -= 7.0f;
            break;
    }
}