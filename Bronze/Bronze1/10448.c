// 10448
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[45] = {}; // 삼각수를 저장한 배열
    for (int i = 1; i < 45; i++)
    {
        arr[i - 1] = i * (i + 1) / 2; // 1,3,6,10,15,21,28,....,990
        // T44 = 990
    }

    for (int count = 0; count < n; count++)
    {
        int a;
        scanf("%d", &a);

        //세개의 삼각수 합
        int three = 0;
        for (int i = 0; i < 45; i++)
        {
            for (int j = 0; j < 45; j++)
            {
                for (int k = 0; k < 45; k++)
                {
                    three = arr[i] + arr[j] + arr[k];
                    if (three == a)
                    {
                        printf("1\n");
                        break;
                    }
                    if (three > a || arr[k] > a)
                    {
                        break;
                    }
                }
                if(arr[j] > a || three == a)
                {
                    break;
                }
            }
            if(arr[i] > a || three == a)
            {
                break;
            }
        }
        
        if (three == a)
        {
            continue;
        }
        else
        {
            printf("0\n");
        }
        
    }
}
