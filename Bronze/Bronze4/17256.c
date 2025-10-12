//17256
#include <stdio.h>

typedef struct
{
    int x;
    int y;
    int z;
}CAKE;

int main()
{
    CAKE a, b, c;
    
    scanf("%d %d %d", &a.x, &a.y, &a.z);
    scanf("%d %d %d", &c.x, &c.y, &c.z);
    
    b.x = c.x - a.z; //c.x = a.z + b.x
    b.y = c.y / a.y; //c.y = a.y x b.y
    b.z = c.z - a.x; //c.z = a.x + b.z
    
    printf("%d %d %d", b.x, b.y, b.z);
}