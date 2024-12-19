//10250
#include <stdio.h>

int main()
{
    int testcase; scanf("%d", &testcase);
    for(int i = 0; i < testcase; i++)
    {
        int H; scanf("%d",&H); 
        int W; scanf("%d",&W);
        int N; scanf("%d",&N);

        int floor, number;

        floor = N % H;
        number = N / H;

        if(floor == 0)  //꼭대기층
        {
            floor = H;
        }
        else
        {
            number++;
        }
        printf("%d\n",floor*100+number);
    }
}
