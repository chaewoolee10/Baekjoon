#include <stdio.h>

void printmax(int *arr);

int main()
{
    char str[51] = {};
    int arr['z' - 'a' + 1] = {};
    
    for(int i = 0; i < 50; i++)
    {
        if(scanf("%[^\n]s", str) == EOF)
        {
            break;
        }
        getchar();
        
        for(int j = 0; j <= 50; j++)
        {
            arr[str[j] - 'a']++;
        }
    }
    printmax(arr);
}

void printmax(int *arr)
{
    int max = 0;
    for(int i = 0; i <= 'z' - 'a'; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    
    for(int i = 0; i <= 'z' - 'a'; i++)
    {
        if(max == arr[i])
        {
            printf("%c", 'a' + i);
        }
        
    }
}