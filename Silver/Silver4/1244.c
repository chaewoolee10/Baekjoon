// 1244
#include <stdio.h>

int arr_switch[105] = {}; // 1번부터 시작

void on_off_function(int n, int num, int gender);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr_switch[i]);
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int gender;
        scanf("%d", &gender);
        int num;
        scanf("%d", &num);
        on_off_function(n, num, gender);
    }
    
    int k = 1;
    for(int i = 1; i <= n; i++)
    {
        if(k % 21 == 0)
        {
            k = 1;
            printf("\n");
        }
        
        printf("%d ", arr_switch[i]);
        k++;
    }
    
}
void on_off_function(int n, int num, int gender)
{
    int front = num;
    int back = num;

    switch (gender)
    {
    case 1:
        for (int i = num; i <= n; i += num)
        {
            if (arr_switch[i] == 0)
            {
                arr_switch[i] = 1;
            }
            else
            {
                arr_switch[i] = 0;
            }
        }
        break;
    case 2:

        while (1)
        {
            if (arr_switch[front] != arr_switch[back])
            {
                front++;
                back--;
                break;
            }
            else if(front == 1 || back == n)
            {
                break;
            }
            else
            {
                front--;
                back++;
            }
        }
        
        for(int i = front; i <= back; i++)
        {
            if (arr_switch[i] == 0)
            {
                arr_switch[i] = 1;
            }
            else
            {
                arr_switch[i] = 0;
            }
        }
        break;
    }
}