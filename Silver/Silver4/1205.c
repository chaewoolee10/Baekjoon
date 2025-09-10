// 1205
#include <stdio.h>

long long int arr[53] = {};

void rankfunc_1(int startpoint, long long int score);
void rankfunc_2(int startpoint, long long int score);

int main()
{
    int n;
    scanf("%d", &n);
    long long int score;
    scanf("%lld", &score);
    int p;
    scanf("%d", &p);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    if (n == p)
    {
        rankfunc_1(n, score);
    }
    else
    {
        rankfunc_2(p, score);
    }
}
void rankfunc_1(int startpoint, long long int score) // n == p
{
    if (arr[startpoint - 1] >= score)
    {
        printf("-1");
    }
    else
    {
        int rank = startpoint + 1;
        for (int i = startpoint - 1; i >= 0; i--)
        {
            if (arr[i] <= score)
            {
                rank--;
            }
            else
            {
                break;
            }
        }
        printf("%d", rank);
    }
}
void rankfunc_2(int startpoint, long long int score) // n < p
{
    int rank = startpoint + 1;
    for (int i = startpoint - 1; i >= 0; i--)
    {
        if (arr[i] <= score)
        {
            rank--;
        }
        else
        {
            break;
        }
    }
    printf("%d", rank);
}
