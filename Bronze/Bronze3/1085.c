//1085
#include <stdio.h>

int main()
{
    int x; scanf("%d", &x);
    int y; scanf("%d", &y);
    int w; scanf("%d", &w); //직사각형의 길이
    int h; scanf("%d", &h); //직사각형의 높이
    
    int min = 1000;
    int arr[4] = {x, y, w - x, h - y};
    
    for(int i = 0; i < 4; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    
}