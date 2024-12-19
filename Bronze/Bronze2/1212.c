// 1212
#include <stdio.h>
#include <string.h>

void cal(char oct, int i)
{
    char binary[12][4] = {"000", "001", "010", "011", "100", "101", "110", "111", "--0", "--1", "-10", "-11"};
    
    if(i == 0 && oct <= '3')
    {
        for(int k = 0; k < 3; k++)
        {
            if(binary[oct - '0' + 8][k] != '-')
            {
                printf("%c", binary[oct - '0' + 8][k]);
            }
        }
    }
    else
    {
        printf("%s", binary[oct - '0']);
    }
}

int main()
{
    char oct[333335] = {};
    scanf("%s", oct);
    int length = strlen(oct);

    for (int i = 0; i < length; i++)
    {
        cal(*(oct + i), i);
    }
}