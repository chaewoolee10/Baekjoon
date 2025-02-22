//6810
#include <stdio.h>

int main()
{
    int arr[3] = {};
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The 1-3-sum is %d", 91 + arr[0] * 1 + arr[1] * 3 + arr[2] * 1);
}
    //9 ∗ 1 + 7 ∗ 3 + 8 ∗ 1 + 0 ∗ 3 + 9 ∗ 1 + 2 ∗ 3 + 1 ∗ 1 + 4 ∗ 3 + 1 ∗ 1 + 8 ∗ 3
    // = 91