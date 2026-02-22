// 2018
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int left = 0, right = 1;
    int count = 1;
    while (1)
    {
        if (right == n)
        {
            break;
        }
        int sum = (right - left + 1) * (left + right) / 2;
        if (sum < n)
        {
            right++;
        }
        else if (sum > n)
        {
            left++;
        }
        else
        {
            right++;
            count++;
        }
    }
    printf("%d", count);
}
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int left = 1, right = 1;
    int count = 1;
    int sum = 0;
    while (1)
    {
        if (right > n)
        {
            break;
        }
        if (sum < n)
        {
            sum += right;
            right++;
        }
        else if (sum > n)
        {
            sum -= left;
            left++;
        }
        else
        {
            sum += right;
            right++;
            count++;
        }
    }
    printf("%d", count);
}