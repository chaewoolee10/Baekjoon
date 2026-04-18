//10833
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int stu, apple; scanf("%d %d", &stu, &apple);
        sum += apple % stu;
    }
    printf("%d", sum);
}