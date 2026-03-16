#include <stdio.h>
#include <string.h>

int main()
{
    char a[105]; scanf("%s", a);
    getchar();
    char op; scanf("%c", &op);
    getchar();
    char b[105]; scanf("%s", b);
    
    char res[205] = {};
    
    int len_a = strlen(a);
    int len_b = strlen(b); 
    int max = len_a > len_b ? len_a : len_b;
    int min = len_a < len_b ? len_a : len_b;
    
    if(len_a == len_b && len_a == 1)
    {
        printf("2");
        return 0;
    }
    switch (op)
    {
    case '+':
       
        res[0] = '1';
        for(int i = 1; i < max; i++)
        {
            res[i] = '0';
            if(i == max - min)  
            {
                res[i]++;
                continue;
            }
        }
        break;
    case '*':
        res[0] = '1';
        for(int i = 1; i < len_a + len_b - 1; i++)
        {
            res[i] = '0';
        }
        break;
    }
    printf("%s", res);
}