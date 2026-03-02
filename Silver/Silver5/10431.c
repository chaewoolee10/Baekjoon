//10431
#include <stdio.h>

void student_sorting(int test);

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int test; scanf("%d", &test);
        student_sorting(test);
    }
}
void student_sorting(int test)
{
    int arr[20] = {};
    int count = 0;
    for(int i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < 20; i++)
    {
        for(int j = i; j < 20; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
    }
    printf("%d %d\n", test, count);
}