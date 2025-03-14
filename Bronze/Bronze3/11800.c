// 11800
#include <stdio.h>

void theyareequal(int a);
void theyarenotequal(int num);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        int b;
        scanf("%d", &b);

        printf("Case %d: ", i + 1);
        if (a == b)
        {
            theyareequal(a);
        }
        else
        {
            if (a + b == 11)
            {
                printf("Sheesh Beesh");
            }
            else
            {
                if (a > b)
                {
                    theyarenotequal(a);
                    printf(" ");
                    theyarenotequal(b);
                }
                else
                {
                    theyarenotequal(b);
                    printf(" ");
                    theyarenotequal(a);
                }
            }
        }
        printf("\n");
    }
}

void theyareequal(int a)
{
    switch (a)
    {
    case 1:
        printf("Habb Yakk");
        break;
    case 2:
        printf("Dobara");
        break;
    case 3:
        printf("Dousa");
        break;
    case 4:
        printf("Dorgy");
        break;
    case 5:
        printf("Dabash");
        break;
    default:
        printf("Dosh");
        break;
    }
}

void theyarenotequal(int num)
{
    switch (num)
    {
    case 1:
        printf("Yakk");
        break;
    case 2:
        printf("Doh");
        break;
    case 3:
        printf("Seh");
        break;
    case 4:
        printf("Ghar");
        break;
    case 5:
        printf("Bang");
        break;
    default:
        printf("Sheesh");
        break;
    }
}