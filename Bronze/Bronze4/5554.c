//5554
#include <stdio.h>

int main()
{ 
    int arr[4];
    int min = 0, sec = 0;

    for(int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 4; i++)
    {
        min += arr[i] / 60;
        sec += arr[i] % 60;
        if(sec >= 60)
        {
            min++;
            sec -= 60;
        }
    }
    printf("%d\n%d", min, sec);

}
