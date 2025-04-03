//2810
#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    char arr[100] = {}; scanf("%s", arr);
    
    int people = strlen(arr);
    
    int cupholder = 1;
    int index = 0;
    
    while(1)
    {
        if(index == n)
        {
            break;
        }
        if(arr[index] == 'S')
        {
            cupholder++;
        }
        if(arr[index] == 'L')
        {
            cupholder++;
            index++;
        }
        index++;
    }
    people > cupholder ? printf("%d", cupholder) : printf("%d", people);
    
    
    
}