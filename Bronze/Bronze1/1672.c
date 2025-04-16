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
    }
    
}

char checker(char a, char b) //a : n번째 ,  : n - 1번쨰
{
    switch(a - b)
    {
        case 2:
        case -2:
            return 'A';
        case 4:
        case -4:
            return 'T';
        case 6:
        case -6:
            return 'C';
        case
    }
    
    /*
    T - A : 84 - 65 19
    T - G ; 84 - 71 13
    T - C : 84 - 67 17
    G - A : 71 - 65 6
    G - C : 71 - 67 4
    C - A : 67 - 65 2
    */
}