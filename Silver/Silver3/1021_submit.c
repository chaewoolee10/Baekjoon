// 1021
/*
10 3
2 9 5
1 2 3 4 5 6 7 8 9 10
2 3 4 5 6 7 8 9 10 1 -> 2번
3 4 5 6 7 8 9 10 1 -> 2 뽑음
1 3 4 5 6 7 8 9 10 -> 3번
10 1 3 4 5 6 7 8 9 -> 3번
9 10 1 3 4 5 6 7 8 -> 3번
10 1 3 4 5 6 7 8 -> 9 뽑음
5 6 7 8 10 1 3 4 -> 3번 x 4
6 7 8 10 1 3 4 -> 5 뽑음
=> 2번 x 1 + 3번 x 7
= 8

*/
#include <stdio.h>

const int DAT_SIZE = 1500;
int dat[DAT_SIZE * 2 + 1] = {};
int front = DAT_SIZE;
int back = DAT_SIZE;
void iniset(int n, int m, int *arr);
int two_func(int target);
int three_func(int target);
void dat_printer();

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int find_arr[55] = {};
    iniset(n, m, find_arr);

    int count = 0;
    int find_addr = 0;

    //dat_printer();
    while (1)
    {
        if (find_arr[find_addr] == 0)
        {
            break;
        }
        int two = two_func(find_arr[find_addr]);
        int three = three_func(find_arr[find_addr]);
        count += two > three ? three : two;
        //printf("two = %d three = %d\n", two, three);
        if (two < three)
        {
            for (int i = 0; i < two; i++)
            {
                dat[back] = dat[front];
                dat[front] = 0;
                back++;
                front++;

                //dat_printer();
            }
            dat[front] = 0;
            front++;
            //printf("two_res = "); dat_printer();
            find_addr++;
        }
        else
        {
            for (int i = 0; i < three; i++)
            {
                dat[front - 1] = dat[back - 1];
                dat[back - 1] = 0;
                back--;
                front--;
                //dat_printer();
            }
            dat[front] = 0;
            front++;
            //printf("three_res = "); dat_printer();
            find_addr++;
        }
    }
    printf("%d", count);
}
void iniset(int n, int m, int *arr)
{
    for (int i = DAT_SIZE; i < DAT_SIZE + n; i++)
    {
        dat[i] = i - DAT_SIZE + 1;
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    back += n;
}
int two_func(int target)
{
    int i = front;
    int count = 0;
    while (1)
    {
        if (dat[i] == target)
        {
            return count;
        }
        i++;
        count++;
    }
}
int three_func(int target)
{
    int i = back;
    int count = 0;
    while (1)
    {
        if (dat[i] == target)
        {
            return count;
        }
        i--;
        count++;
    }
}
void dat_printer()
{
    for (int i = DAT_SIZE - 10; i < DAT_SIZE + 20; i++)
    {
        printf("%d ", dat[i]);
    }
    printf("\n");
}