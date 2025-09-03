//25192
#include <stdio.h>
#include <string.h>

int hash_arr[1000003] = {};

unsigned long long int string_to_hash(char *str);
int hashcompare();

int main()
{
    int n; scanf("%d", &n);
    int entercount = 1;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        char str[25] = {}; scanf("%s", str);
        if(!strcmp(str, "ENTER"))
        {
            if(i == 0)
            {
                continue;
            } 
            else
            {
                entercount++;
            }
        }
        else
        {
            int a = string_to_hash(str);
            if(hash_arr[a] == 0) //아예 처음 인사함
            {
                count++;
                hash_arr[a] = entercount;
            }
            else if(hash_arr[a] == entercount) //같은 enter에서 다른 채팅을 친 경우
            {
                continue;
            }
            else if(hash_arr[a] != entercount) //다음 enter에서 인사를 한 경우
            {
                count++;
                hash_arr[a] = entercount;
            }
        }
    }
    printf("%d", count);
    
}
unsigned long long int string_to_hash(char *str)
{
    int length = strlen(str);
    unsigned long long int a = 1;
    unsigned long long int hash = 0;
    for(int i = 0; i < length; i++)
    {
        a *= 257;
        a %= 1000003;
        int intconvert = 0;
        int w = 1;
        if('a' <= str[i] && str[i] <= 'z')
        {
            intconvert = 'a';
            w *= 3;
        }
        else if('A' <= str[i] && str[i] <= 'Z')
        {
            intconvert = 'A';
            w *= 5;
        }
        else if('0' <= str[i] && str[i] <= '9')
        {
            intconvert = '0';
            w *= 7;
        }
        
        hash += a * (str[i] - intconvert + 1) * w;   
    }
    hash %= 1000003;
    //printf("%s %llu\n", str, hash);
    return hash;
}

