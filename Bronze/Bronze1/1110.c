//1110

// 26부터 시작한다. 
// 2+6 = 8이다. 새로운 수는 68이다. 
// 6+8 = 14이다. 새로운 수는 84이다. 
// 8+4 = 12이다. 새로운 수는 42이다. 
// 4+2 = 6이다. 새로운 수는 26이다.
// n = 26, newnum = 0, a = 0, newn = 0
// a = n % 10(1의자릿수) + n / 10 (10의자릿수) -> a(더한 값) = 8 , n = 26, newnum(새로운 수) = 0
// newnum = n % 10(1의자릿수) * 10 + a(전 숫자의 각 자리를 더한 숫자) -> newnum = 68 , a = 8, n = 26 newnum != n
// 다시 위의 과정 반복(n이 newnum가 됨)
// 위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.

#include <stdio.h>
int newnumgenerate(int n)
{
    int a = n%10 + n/10;
    int newnum = (n%10)*10 + a%10;

    return newnum;
}

int main()
{
    int n; scanf("%d", &n);
    int cycle = 1;
    if(n < 10)
    {
        n *= 10;
    }
    int newn = n;

    while(1)
    {
        newn = newnumgenerate(newn);
        //printf("%d\n", newn);
        if(n == newn)
        {
            break;
        }
        cycle++;      
        
    }
    
    printf("%d", cycle);

}