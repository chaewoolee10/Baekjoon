//1934
/*
두 수 A, B의 최대공약수를 G, 최소공배수를 L이라 하면
A=a×G, B=b×G(단, a와 b는 서로소)
L=a×b×G
*/
//최소공배수의 약수 : 두 수
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);    
        
        int min = a < b ? a : b;
        int max = a > b ? a : b;
        
        int g = 1; 
        
        for(int j = 2; j <= min; j++)
        {
            if(min % j == 0 && max % j == 0)
            {
                g = j; //최소공배수 구하기
            }
        }
        
        int g_a = a / g; // 최대공약수 * 서로소 = 원래 숫자
        int g_b = b / g; // 최대공약수 * 서로소 = 원래 숫자
        
        printf("%d\n", g_a * g_b * g); //최소공배수 = 서로소a * 서로소b * 최대공약수      
    }    
}