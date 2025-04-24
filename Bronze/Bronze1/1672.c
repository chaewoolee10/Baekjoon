//1672
#include <stdio.h>
#include <string.h>

char checker(char a, char b); //a : n번째 ,  : n - 1번쨰

int main()
{
    int n; scanf("%d", &n);
    char dna[1000002] = {}; scanf("%s", dna);
    
    int length = strlen(dna);
    
    for(int i = 1; i < length; i++)
    {
        char c = checker(dna[length - i], dna[length - 1 - i]);
        dna[length - 1 - i] = c;
        dna[length - i] = '\0';
    }
    printf("%s", dna);
}

char checker(char a, char b) //a : n번째 ,  : n - 1번쨰
{
    char c;
    switch(a - b)
    {
        case 2:
        case -2:
            c = 'A';
            break;
        case 4:
        case -4:
            c = 'T';
            break;
        case 6:
        case -6:
            c = 'C';
            break;
        case 17:
        case -17:
            c = 'G';
            break;
        case 13:
        case -13:
            c = 'A';
            break;
        case 19:
        case -19:
            c = 'G';
            break;
        default:
            c = a;
            break;
    }
    return c;
}