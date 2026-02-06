// 1380
#include <stdio.h>

typedef struct {
    char name[65];
    int a; 
    int b;
} student;

int main()
{
    int count = 1;
    while (1)
    {
        student arr[103] = {};
        int n; scanf("%d", &n);
        getchar();
        if(n == 0)
        {
            break;
        }
        for(int i = 0; i < n; i++)
        {
            scanf("%[^\n]s", arr[i].name);
            getchar();
        }
        for(int i = 0; i < 2 * n - 1; i++)
        {
            int target_num = 0; scanf("%d", &target_num);
            getchar();
            char target_alp; scanf("%c", &target_alp);
            
            if(target_alp == 'A')
            {
                arr[target_num - 1].a++;
            }
            else
            {
                arr[target_num - 1].b++;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(arr[i].a == 0 || arr[i].b == 0)
            {
                printf("%d ", count);
                printf("%s\n", arr[i].name);
            }
        }
        count++;
    }
}