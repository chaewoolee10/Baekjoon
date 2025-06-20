//3985
#include <stdio.h>

void arr_ini(int *arr);

int main()
{
    int l; scanf("%d", &l);
    int n; scanf("%d", &n);
    int arr[1000] = {}; arr_ini(arr);
    
    int expect_max = 0;
    int expect_max_num = -1;
    int real_max = 0;
    int real_max_num = -1;
    
    for(int i = 0; i < n; i++)
    {
        int start; scanf("%d", &start);
        int end; scanf("%d", &end);
        int real = 0;
        int expect = end - start + 1;
        
        if(expect_max < expect)
        {
            expect_max = expect;
            expect_max_num = i + 1;
        }
        
        for(int j = start - 1; j < end; j++)
        {
            if(arr[j] == 1)
            {
                real++;
                arr[j] = 0;
            }
        }
        if(real_max < real)
        {
            real_max = real;
            real_max_num = i + 1;
        }
    }
    printf("%d\n",expect_max_num);
    printf("%d\n",real_max_num);
    
}
void arr_ini(int *arr)
{
    for(int i = 0; i < 1000; i++)
    {
        arr[i] = 1;
    }
}