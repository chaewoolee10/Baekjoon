// 11650
#include <stdio.h>

struct coordinate
{
    int x;
    int y;
};

struct coordinate arr[100000];

int main()
{
    int n;
    scanf("%d", &n);
    int ymax;
    int ymin;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    
    int ymax = arr[0].y;
    int ymin = arr[0].y;
    
    for (int i = 0; i < n; i++)
    {
        if(ymax < arr[i].y)       
        {
            ymax = arr[i].y;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i].x < arr[j].x)
            {
                int tmp = arr[i].x;
                arr[i].x = arr[j].x;
                arr[j].x = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
           
    }
    
}