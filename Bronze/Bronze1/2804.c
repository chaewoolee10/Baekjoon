// 2804
#include <stdio.h>
#include <string.h>

void samealphabet(int *arr, char *a, char *b);

int main()
{
    char a[31] = {};
    scanf("%s", a);
    char b[31] = {};
    scanf("%s", b);

    int a_length = strlen(a);
    int b_length = strlen(b);

    int indexarr[2] = {};         // a와 b가 같아지는 처음 인덱스 {a, b}
    samealphabet(indexarr, a, b); // A는 b행, B는 a열로 가야함

    for (int i = 0; i < b_length; i++)
    {
        if (i == indexarr[1])
        {
            printf("%s\n", a);
            continue;
        }
        else
        {
            for (int j = 0; j < a_length; j++)
            {
                if (j == indexarr[0])
                {
                    printf("%c", b[i]);
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
    }
}

void samealphabet(int *arr, char *a, char *b)
{
    int a_length = strlen(a);
    int b_length = strlen(b);

    int checker = 0;
    for (int i = 0; i < a_length; i++)
    {
        for (int j = 0; j < b_length; j++)
        {
            if (a[i] == b[j])
            {
                checker = 1;
                arr[0] = i;
                arr[1] = j;
                break;
            }
        }

        if (checker == 1)
        {
            break;
        }
    }
}