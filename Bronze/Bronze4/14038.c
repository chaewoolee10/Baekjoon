//14038
#include <stdio.h>

int main()
{
    int count = 0;
    for(int i = 0; i < 6; i++)
    {
        char c; scanf("%c", &c);
        getchar();
        count += c == 'W' ? 1 : 0;
    }
    switch (count)
    {
    case 6:
    case 5:
        printf("1");
        break;
    case 4:
    case 3:
        printf("2");
        break;
    case 2:
    case 1:
        printf("3");
        break;
    default:
        printf("-1");
        break;
    }
}