//2083
#include <stdio.h>

int main()
{
    while(1)
    {
        char str[10]; scanf("%s", str);
        int age; scanf("%d", &age);
        int weight; scanf("%d", &weight);

        if(str[0] == '#' && age == 0 && weight == 0)
        {
            break;
        }
        else
        {
            if(age > 17 || weight >= 80)
            {
                printf("%s Senior\n", str);
            }
            else
            {
                printf("%s Junior\n", str);
            }
        }

    }
}