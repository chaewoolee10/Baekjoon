//2890
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int dist;
} kayak;

int main()
{
    char str[50][55] = {};
    int r, c; scanf("%d %d", &r, &c);
    kayak arr[10] = {};
    int max = 0;
    
    for(int i = 0; i < r; i++)
    {
        scanf("%s", str[i]);
        for(int j = 1; j < c - 1; j++)
        {
            if(str[i][j] != '.')
            {
                arr[str[i][j] - '1'].dist = j - 1;
                break;
            }
        }
    }
    for(int i = 0; i < 9; i++)
    {
        if(arr[i].dist > max)
        {
            max = arr[i].dist;
        }
    }
    
    for(int i = max, grade = 1; i >= 0; i--)
    {
        int check = 0;
        for(int j = 0; j < 9; j++)
        {
            if(arr[j].dist == i)
            {
                arr[j].num = grade;
                check = 1;
            }
        }
        grade += check ? 1 : 0;
    }
    for(int i = 0; i < 9; i++)
    {
        printf("%d\n", arr[i].num);
    }
}
